#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define FIFO "/tmp/producer_consumer_fifo"

int main()
{
    int fd = open(FIFO, O_RDONLY);

    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    int n;

    read(fd, &n, sizeof(n));

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        perror("malloc");
        close(fd);
        exit(EXIT_FAILURE);
    }

    read(fd, arr, n * sizeof(int));

    int sum = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nConsumer Result\n");
    printf("---------------------\n");
    printf("Received values:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
    printf("Sum          = %d\n", sum);
    printf("Average      = %.2f\n", (float)sum / n);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers  = %d\n", odd);

    close(fd);
    free(arr);

    unlink(FIFO);

    return 0;
}
