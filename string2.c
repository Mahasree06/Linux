#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter product name: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != '\n')
            i++;
        else
            break;
    }

    printf("Length = %d", i);

    return 0;
}
