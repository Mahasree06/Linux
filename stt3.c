#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter Title: ");
    scanf("%s", b.title);
    printf("Enter Author: ");
    scanf("%s", b.author);
    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b.title, b.author, b.price);

    return 0;
}
