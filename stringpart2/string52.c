#include<stdio.h>

void upperOnly(char str[])
{
    int i;

    printf("Uppercase letters: ");

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            printf("%c",str[i]);
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    upperOnly(str);

    return 0;
}
