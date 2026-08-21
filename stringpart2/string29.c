#include<stdio.h>

int compare(char s1[],char s2[])
{
    int i=0;

    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }

    return 1;
}

int main()
{
    char s1[100],s2[100];

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    if(compare(s1,s2))
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
