#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area;

    printf("Enter Length: ");
    scanf("%f", &r.length);

    printf("Enter Breadth: ");
    scanf("%f", &r.breadth);

    area = r.length * r.breadth;

    printf("Area = %.2f\n", area);

    return 0;
}
