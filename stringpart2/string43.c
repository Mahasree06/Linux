#include<stdio.h>

void removeVowels(char str[])
{
    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
             str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
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

    removeVowels(str);

    printf("%s",str);

    return 0;
}
