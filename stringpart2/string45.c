#include<stdio.h>

void removeChar(char str[],char ch)
{
    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';
}

int main()
{
    char str[100],ch;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character to remove: ");
    scanf(" %c",&ch);

    removeChar(str,ch);

    printf("%s",str);

    return 0;
}
