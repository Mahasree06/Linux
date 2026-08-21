#include<stdio.h>

int search(char str[],char ch)
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            return 1;
    }

    return 0;
}

int main()
{
    char str[100],ch;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character: ");
    scanf(" %c",&ch);

    if(search(str,ch))
        printf("Character Found");
    else
        printf("Character Not Found");

    return 0;
}
