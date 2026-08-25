#include <stdio.h>

struct Student {
    char name[30];
    int mark1, mark2, mark3;
};

int total(struct Student s) {
    return s.mark1 + s.mark2 + s.mark3;
}

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &s.mark1, &s.mark2, &s.mark3);

    printf("Total Marks = %d\n", total(s));

    return 0;
}
