#include<stdio.h>

int firstOccur(char str[], char ch)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
            return i;
    }
    return -1;
}

int main()
{
    char str[100], ch;
    int pos;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character: ");
    scanf(" %c",&ch);

    pos=firstOccur(str,ch);

    if(pos==-1)
        printf("Character not found");
    else
        printf("First occurrence = %d",pos+1);

    return 0;
}
