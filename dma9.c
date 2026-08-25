#include <stdio.h>
#include <stdlib.h>

union Contact
{
    char phone[15];
    char email[50];
};

struct Student
{
    int id;
    char *name;
    float marks;
    union Contact contact;
    int choice;
};

int main()
{
    int n, i;
    struct Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        students[i].name = (char *)malloc(50 * sizeof(char));

        if (students[i].name == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        printf("Choose contact type:\n");
        printf("1. Phone\n");
        printf("2. Email\n");
        printf("Enter choice: ");
        scanf("%d", &students[i].choice);

        if (students[i].choice == 1)
        {
            printf("Enter Phone: ");
            scanf("%14s", students[i].contact.phone);
        }
        else if (students[i].choice == 2)
        {
            printf("Enter Email: ");
            scanf("%49s", students[i].contact.email);
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID     : %d\n", students[i].id);
        printf("Name   : %s\n", students[i].name);
        printf("Marks  : %.2f\n", students[i].marks);

        if (students[i].choice == 1)
        {
            printf("Phone  : %s\n", students[i].contact.phone);
        }
        else if (students[i].choice == 2)
        {
            printf("Email  : %s\n", students[i].contact.email);
        }
    }

    for (i = 0; i < n; i++)
    {
        free(students[i].name);
    }

    free(students);

    return 0;
}
