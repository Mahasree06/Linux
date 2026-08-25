#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void read(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void display(struct Student s) {
    printf("\nRoll: %d\nName: %s\nMarks: %.2f\n",
           s.roll, s.name, s.marks);
}

int main() {
    struct Student s;

    read(&s);
    display(s);

    return 0;
}
