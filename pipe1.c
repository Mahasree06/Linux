#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pipefd[2];
    int n;

    if (pipe(pipefd) == -1)
    {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    int *marks = (int *)malloc(n * sizeof(int));

    if (marks == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    printf("Enter marks:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        free(marks);
        exit(EXIT_FAILURE);
    }

    if (pid > 0)
    {
        // Parent
        close(pipefd[0]);

        write(pipefd[1], &n, sizeof(n));
        write(pipefd[1], marks, n * sizeof(int));

        close(pipefd[1]);

        free(marks);
        wait(NULL);
    }
    else
    {
        // Child
        close(pipefd[1]);

        int size;

        read(pipefd[0], &size, sizeof(size));

        int *received = (int *)malloc(size * sizeof(int));

        if (received == NULL)
        {
            perror("malloc");
            exit(EXIT_FAILURE);
        }

        read(pipefd[0], received, size * sizeof(int));

        int sum = 0;
        int max = received[0];
        int min = received[0];

        for (int i = 0; i < size; i++)
        {
            sum += received[i];

            if (received[i] > max)
                max = received[i];

            if (received[i] < min)
                min = received[i];
        }

        printf("\nChild Process Result\n");
        printf("Average = %.2f\n", (float)sum / size);
        printf("Maximum = %d\n", max);
        printf("Minimum = %d\n", min);

        free(received);
        close(pipefd[0]);
    }

    return 0;
}
