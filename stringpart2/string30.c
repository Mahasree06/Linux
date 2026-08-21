#include<stdio.h>

void reverse(char str[])
{
    int len=0,i;

    while(str[len]!='\0')
    {
        if(str[len]=='\n')
            break;
        len++;
    }

    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Reversed string: ");
    reverse(str);

    return 0;
}
