#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\nID: %d\nName: %s\nSalary: %.2f\n",
           e.id, e.name, e.salary);

    return 0;
}
