#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter company name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("Lowercase: %s", str);

    return 0;
}
