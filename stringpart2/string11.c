#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter serial number: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Result: %s", str);

    return 0;
}
