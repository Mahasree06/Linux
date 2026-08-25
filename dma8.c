#include <stdio.h>
#include <stdlib.h>

union Student
{
    int id;
    float marks;
    char name[30];
};

int main()
{
    int n, i;
    union Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    students = (union Student *)malloc(n * sizeof(union Student));

    if (students == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter ID values:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &students[i].id);
        printf("ID = %d\n", students[i].id);
    }

    printf("\nEnter Marks values:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d Marks: ", i + 1);
        scanf("%f", &students[i].marks);
        printf("Marks = %.2f\n", students[i].marks);
    }

    printf("\nEnter Name values:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d Name: ", i + 1);
        scanf(" %29[^\n]", students[i].name);
        printf("Name = %s\n", students[i].name);
    }

    free(students);

    return 0;
}
