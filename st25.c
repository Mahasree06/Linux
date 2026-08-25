#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int copies;
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("Enter Author: ");
    scanf("%s", b.author);

    printf("Enter Copies Available: ");
    scanf("%d", &b.copies);

    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Copies: %d\n", b.copies);

    return 0;
}
