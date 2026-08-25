#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i, max;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d %s %f",
              &e[i].id, e[i].name, &e[i].salary);

    max = 0;

    for (i = 1; i < n; i++) {
        if (e[i].salary > e[max].salary)
            max = i;
    }

    printf("\nHighest Salary Employee:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           e[max].id, e[max].name, e[max].salary);

    return 0;
}
