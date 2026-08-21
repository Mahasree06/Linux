#include<stdio.h>

int lastOccur(char str[], char ch)
{
    int i,pos=-1;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            pos=i;
    }

    return pos;
}

int main()
{
    char str[100],ch;
    int pos;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character: ");
    scanf(" %c",&ch);

    pos=lastOccur(str,ch);

    if(pos==-1)
        printf("Character not found");
    else
        printf("Last occurrence = %d",pos+1);

    return 0;
}
