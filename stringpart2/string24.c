#include<stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != str[i + 1])
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Result: %s", str);

    return 0;
}
