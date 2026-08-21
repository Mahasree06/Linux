#include<stdio.h>

void upper(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    upper(str);

    printf("Uppercase: %s",str);

    return 0;
}
