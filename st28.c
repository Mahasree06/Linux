#include <stdio.h>

struct Student {
    int roll;
    char name[30];
};

int main() {
    struct Student s = {101, "Ravi"};
    struct Student *ptr = &s;

    printf("Using . operator:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);

    printf("\nUsing -> operator:\n");
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);

    return 0;
}
