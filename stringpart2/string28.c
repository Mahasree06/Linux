#include<stdio.h>

void concat(char s1[],char s2[])
{
    int i=0,j=0;

    while(s1[i]!='\0')
    {
        if(s1[i]=='\n')
        {
            s1[i]='\0';
            break;
        }
        i++;
    }

    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';
}

int main()
{
    char s1[100],s2[100];

    printf("Enter first string: ");
    fgets(s1,sizeof(s1),stdin);

    printf("Enter second string: ");
    fgets(s2,sizeof(s2),stdin);

    concat(s1,s2);

    printf("Concatenated string: %s",s1);

    return 0;
}
