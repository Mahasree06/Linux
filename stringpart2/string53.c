#include<stdio.h>

int valid(char str[])
{
    int i;
    int upper=0,lower=0,digit=0,special=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            upper=1;
        else if(str[i]>='a'&&str[i]<='z')
            lower=1;
        else if(str[i]>='0'&&str[i]<='9')
            digit=1;
        else
            special=1;
    }

    return upper&&lower&&digit&&special;
}

int main()
{
    char pass[100];

    printf("Enter password: ");
    scanf("%s",pass);

    if(valid(pass))
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}
