#include<stdio.h>

int substring(char str[],char sub[])
{
    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;sub[j]!='\0';j++)
        {
            if(str[i+j]!=sub[j])
                break;
        }

        if(sub[j]=='\0')
            return 1;
    }

    return 0;
}

int main()
{
    char str[100],sub[100];

    printf("Enter main string: ");
    scanf("%s",str);

    printf("Enter substring: ");
    scanf("%s",sub);

    if(substring(str,sub))
        printf("Substring Found");
    else
        printf("Substring Not Found");

    return 0;
}
