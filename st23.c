#include <stdio.h>

struct Student {
    char name[30];
    float mark1, mark2, mark3;
};

int main() {
    struct Student s;
    float total, percentage;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter 3 marks: ");
    scanf("%f %f %f",
          &s.mark1, &s.mark2, &s.mark3);

    total = s.mark1 + s.mark2 + s.mark3;
    percentage = total / 3;

    printf("Total = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
