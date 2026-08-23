#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO "/tmp/producer_consumer_fifo"

int main()
{
    int n;

    if (mkfifo(FIFO, 0666) == -1)
    {
        // FIFO may already exist
        printf("FIFO already exists or could not be created.\n");
    }

    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    printf("Generating values...\n");

    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    printf("Produced values:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int fd = open(FIFO, O_WRONLY);

    if (fd == -1)
    {
        perror("open");
        free(arr);
        exit(EXIT_FAILURE);
    }

    // Send number of elements
    write(fd, &n, sizeof(n));

    // Send array
    write(fd, arr, n * sizeof(int));

    printf("Data sent to consumer.\n");

    close(fd);
    free(arr);

    return 0;
}
