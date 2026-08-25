#include <stdio.h>

struct Mobile {
    char brand[50];
    char model[50];
    float price;
};

int main() {
    struct Mobile m;

    printf("Enter Brand: ");
    scanf("%s", m.brand);
    printf("Enter Model: ");
    scanf("%s", m.model);
    printf("Enter Price: ");
    scanf("%f", &m.price);

    printf("\nBrand: %s\nModel: %s\nPrice: %.2f\n",
           m.brand, m.model, m.price);

    return 0;
}
