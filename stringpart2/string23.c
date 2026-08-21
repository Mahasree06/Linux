#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase letters: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i]);
    }

    return 0;
}
