#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

void updateSalary(struct Employee *e) {
    e->salary = e->salary + 5000;
}

int main() {
    struct Employee e;

    printf("Enter ID, Name and Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);

    updateSalary(&e);

    printf("\nID: %d\nName: %s\nUpdated Salary: %.2f\n",
           e.id, e.name, e.salary);

    return 0;
}
