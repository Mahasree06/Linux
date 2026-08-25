#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++) {
        printf("%d %s %.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
