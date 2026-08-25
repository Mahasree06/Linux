#include <stdio.h>

struct Bank {
    int accountNo;
    char name[30];
    float balance;
    float rate;
};

int main() {
    struct Bank b;
    float interest;

    printf("Enter Account Number: ");
    scanf("%d", &b.accountNo);

    printf("Enter Name: ");
    scanf("%s", b.name);

    printf("Enter Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Interest Rate: ");
    scanf("%f", &b.rate);

    interest = (b.balance * b.rate) / 100;

    printf("\nAccount Number: %d\n", b.accountNo);
    printf("Name: %s\n", b.name);
    printf("Annual Interest: %.2f\n", interest);

    return 0;
}
