#include <stdio.h>

struct Address {
    int door;
    char street[50];
    char city[50];
    int pin;
};

int main() {
    struct Address a;

    printf("Enter Door Number: ");
    scanf("%d", &a.door);
    printf("Enter Street: ");
    scanf("%s", a.street);
    printf("Enter City: ");
    scanf("%s", a.city);
    printf("Enter PIN Code: ");
    scanf("%d", &a.pin);

    printf("\nDoor Number: %d\nStreet: %s\nCity: %s\nPIN: %d\n",
           a.door, a.street, a.city, a.pin);

    return 0;
}
