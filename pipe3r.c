#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define FIFO "/tmp/employee_fifo"

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    int fd = open(FIFO, O_RDONLY);

    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    read(fd, emp, sizeof(struct Employee));

    float annual_salary = emp->salary * 12;

    printf("\nEmployee Details\n");
    printf("-------------------------\n");
    printf("ID         : %d\n", emp->id);
    printf("Name       : %s\n", emp->name);
    printf("Department : %s\n", emp->department);
    printf("Monthly Salary : %.2f\n", emp->salary);
    printf("Annual Salary  : %.2f\n", annual_salary);

    if (emp->salary >= 50000)
        printf("Salary Category : High\n");
    else if (emp->salary >= 25000)
        printf("Salary Category : Medium\n");
    else
        printf("Salary Category : Low\n");

    close(fd);
    free(emp);

    unlink(FIFO);

    return 0;
}
