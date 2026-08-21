
#include<stdio.h>

int length(char str[])
{
    int i=0;
    while(str[i]!='\0' && str[i]!='\n')
        i++;
    return i;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Length = %d",length(str));

    return 0;
}
