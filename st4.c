#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float cost;
};

int main() {
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.id);
    printf("Enter Name: ");
    scanf("%s", p.name);
    printf("Enter Cost: ");
    scanf("%f", &p.cost);

    printf("\nProduct ID: %d\nName: %s\nCost: %.2f\n",
           p.id, p.name, p.cost);

    return 0;
}
