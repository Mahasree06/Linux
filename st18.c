#include <stdio.h>

struct Student {
    char name[30];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;
    float sum = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Name and Marks: ");
        scanf("%s %f", s[i].name, &s[i].marks);
        sum += s[i].marks;
    }

    average = sum / n;

    printf("Average Marks = %.2f\n", average);

    return 0;
}
