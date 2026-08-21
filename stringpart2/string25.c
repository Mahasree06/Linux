#include<stdio.h>

int main()
{
    char pass[100];
    int i;
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", pass);

    for(i = 0; pass[i] != '\0'; i++)
    {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper = 1;
        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower = 1;
        else if(pass[i] >= '0' && pass[i] <= '9')
            digit = 1;
        else
            special = 1;
    }

    if(upper && lower && digit && special)
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}
