#include <stdio.h>

typedef struct {
    int roll;
    char name[30];
    float marks;
} Student;

int main() {
    Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n%d %s %.2f\n",
           s.roll, s.name, s.marks);

    return 0;
}
