#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO "/tmp/string_fifo"

int main()
{
    mkfifo(FIFO, 0666);

    printf("Enter a string: ");

    char temp[500];
    fgets(temp, sizeof(temp), stdin);

    temp[strcspn(temp, "\n")] = '\0';

    char *str = (char *)malloc(strlen(temp) + 1);

    if (str == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    strcpy(str, temp);

    int fd = open(FIFO, O_WRONLY);

    if (fd == -1)
    {
        perror("open");
        free(str);
        exit(EXIT_FAILURE);
    }

    write(fd, str, strlen(str) + 1);

    close(fd);
    free(str);

    printf("String sent successfully.\n");

    return 0;
}
