#include<stdio.h>

int vowels(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
           str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Vowels = %d",vowels(str));

    return 0;
}
