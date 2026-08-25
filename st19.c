#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %s %f",
              &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudent Names:\n");

    for (i = 0; i < n; i++)
        printf("%s\n", s[i].name);

    return 0;
}
