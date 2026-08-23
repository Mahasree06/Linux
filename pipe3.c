#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int pipe1[2];
    int pipe2[2];
    int n;

    if (pipe(pipe1) == -1 || pipe(pipe2) == -1)
    {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    pid_t pid = fork();

    if (pid < 0)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid > 0)
    {
        // Parent

        close(pipe1[0]);
        close(pipe2[1]);

        // Send size and array
        write(pipe1[1], &n, sizeof(n));
        write(pipe1[1], arr, n * sizeof(int));

        close(pipe1[1]);

        // Receive sorted array
        read(pipe2[0], arr, n * sizeof(int));

        close(pipe2[0]);

        printf("\nSorted array:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");

        free(arr);
        wait(NULL);
    }
    else
    {
        // Child

        close(pipe1[1]);
        close(pipe2[0]);

        int size;

        read(pipe1[0], &size, sizeof(size));

        int *received = (int *)malloc(size * sizeof(int));

        if (received == NULL)
        {
            perror("malloc");
            exit(EXIT_FAILURE);
        }

        read(pipe1[0], received, size * sizeof(int));

        close(pipe1[0]);

        // Bubble sort
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (received[j] > received[j + 1])
                {
                    int temp = received[j];
                    received[j] = received[j + 1];
                    received[j + 1] = temp;
                }
            }
        }

        // Send sorted array back
        write(pipe2[1], received, size * sizeof(int));

        close(pipe2[1]);

        free(received);
    }

    return 0;
}
