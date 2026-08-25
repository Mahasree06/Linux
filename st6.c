#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d;

    printf("Enter Day Month Year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    printf("Date: %02d/%02d/%04d\n",
           d.day, d.month, d.year);

    return 0;
}
