#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date dob, current;
    int age;

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d",
          &dob.day, &dob.month, &dob.year);

    printf("Enter Current Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &current.day, &current.month, &current.year);

    age = current.year - dob.year;

    if (current.month < dob.month ||
        (current.month == dob.month && current.day < dob.day))
        age--;

    printf("Age = %d years\n", age);

    return 0;
}
