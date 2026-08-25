#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        scanf("%d %s %f",
              &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Details:\n");

    for (i = 0; i < n; i++) {
        printf("%d %s %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
