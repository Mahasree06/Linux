#include<stdio.h>

void replace(char str[],char old,char newc)
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==old)
            str[i]=newc;
    }
}

int main()
{
    char str[100],old,newc;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter old character: ");
    scanf(" %c",&old);

    printf("Enter new character: ");
    scanf(" %c",&newc);

    replace(str,old,newc);

    printf("%s",str);

    return 0;
}
