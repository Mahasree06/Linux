#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s1 = {1, "Ravi", 80};
    struct Student s2 = {2, "Priya", 90};
    struct Student temp;

    temp = s1;
    s1 = s2;
    s2 = temp;

    printf("After swapping:\n");

    printf("Student 1: %d %s %.2f\n",
           s1.roll, s1.name, s1.marks);

    printf("Student 2: %d %s %.2f\n",
           s2.roll, s2.name, s2.marks);

    return 0;
}
