#include <stdio.h>

int main() {
    char str[100], old, newc;
    int i;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &newc);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == old)
            str[i] = newc;
    }

    printf("Result: %s", str);

    return 0;
}
