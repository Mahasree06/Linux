#include<stdio.h>

int main()
{
    char str[100], ch;
    int i, pos = -1;

    printf("Enter file name: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            pos = i;
    }

    if(pos != -1)
        printf("Last occurrence at position %d", pos + 1);
    else
        printf("Character not found");

    return 0;
}
