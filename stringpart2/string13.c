#include <stdio.h>

int main() {
    char first[50], last[50];
    int i = 0, j = 0;

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    while (first[i] != '\0')
        i++;

    first[i] = ' ';
    i++;

    while (last[j] != '\0') {
        first[i] = last[j];
        i++;
        j++;
    }

    first[i] = '\0';

    printf("Full Name: %s", first);

    return 0;
}
