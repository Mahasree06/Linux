#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter email subject: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase: %s", str);

    return 0;
}

