#include <stdio.h>

int main() {
    char str[100];
    int i, words = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ' && str[i] != '\n') ||
            (str[i] == ' ' && str[i + 1] != ' ' &&
             str[i + 1] != '\0' && str[i + 1] != '\n'))
            words++;
    }

    printf("Words = %d", words);

    return 0;
}

