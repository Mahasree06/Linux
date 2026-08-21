#include<stdio.h>

void removeSpace(char str[])
{
    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    removeSpace(str);

    printf("%s",str);

    return 0;
}
