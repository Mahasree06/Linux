#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
           str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            str[i] = '*';
        }
    }

    printf("%s", str);

    return 0;
}
