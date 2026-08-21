#include<stdio.h>

void copy(char s1[],char s2[])
{
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
}

int main()
{
    char s1[100],s2[100];

    printf("Enter string: ");
    fgets(s1,sizeof(s1),stdin);

    copy(s1,s2);

    printf("Copied string: %s",s2);

    return 0;
}

