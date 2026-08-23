#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

#define FIFO "/tmp/string_fifo"

int main()
{
    int fd = open(FIFO, O_RDONLY);

    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    char *str = (char *)malloc(500);

    if (str == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    ssize_t bytes = read(fd, str, 499);

    if (bytes <= 0)
    {
        perror("read");
        free(str);
        close(fd);
        exit(EXIT_FAILURE);
    }

    str[bytes] = '\0';

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (isdigit(ch))
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        else if (isalpha(ch))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("\nString = %s\n", str);
    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits     = %d\n", digits);
    printf("Spaces     = %d\n", spaces);

    free(str);
    close(fd);

    unlink(FIFO);

    return 0;
}
