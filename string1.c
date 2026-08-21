#include <stdio.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name: %s", name);

    return 0;
}

