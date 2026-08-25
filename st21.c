#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 details: ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);

    printf("Enter Student 2 details: ");
    scanf("%d %s %f", &s2.roll, s2.name, &s2.marks);

    if (s1.marks > s2.marks)
        printf("Topper: %s\n", s1.name);
    else if (s2.marks > s1.marks)
        printf("Topper: %s\n", s2.name);
    else
        printf("Both students have equal marks.\n");

    return 0;
}
