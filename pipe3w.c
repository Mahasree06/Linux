#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
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
    mkfifo(FIFO, 0666);

    struct Employee *emp;

    emp = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Name: ");
    scanf(" %[^\n]", emp->name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp->department);

    printf("Enter Monthly Salary: ");
    scanf("%f", &emp->salary);

    int fd = open(FIFO, O_WRONLY);

    if (fd == -1)
    {
        perror("open");
        free(emp);
        exit(EXIT_FAILURE);
    }

    write(fd, emp, sizeof(struct Employee));

    printf("\nEmployee record sent successfully.\n");

    close(fd);
    free(emp);

    return 0;
}
