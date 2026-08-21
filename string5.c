#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter password: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0') {
        if (str[len] == '\n')
            break;
        len++;
    }

    printf("Reversed string: ");

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
