#include <stdio.h>

struct Address {
    char city[30];
    int pin;
};

struct Employee {
    int id;
    char name[30];
    float salary;
    struct Address address;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("Enter City: ");
    scanf("%s", e.address.city);

    printf("Enter PIN: ");
    scanf("%d", &e.address.pin);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("City: %s\n", e.address.city);
    printf("PIN: %d\n", e.address.pin);

    return 0;
}
