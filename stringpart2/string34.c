#include<stdio.h>

int words(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if((i==0 && str[i]!=' ') ||
           (str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'))
            count++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter sentence: ");
    fgets(str,sizeof(str),stdin);

    printf("Words = %d",words(str));

    return 0;
}
