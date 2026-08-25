#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nRoll Number: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f\n", s.marks);

    return 0;
}
