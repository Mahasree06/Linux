#include<stdio.h>

int length(char s[])
{
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}

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

int compare(char s1[],char s2[])
{
    int i=0;

    while(s1[i]!='\0'||s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }

    return 1;
}

void reverse(char s[])
{
    int i,len=length(s);

    for(i=len-1;i>=0;i--)
        printf("%c",s[i]);
}

void upper(char s[])
{
    int i;

    for(i=0;s[i]!='\0';i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
}

int palindrome(char s[])
{
    int i,len=length(s);

    for(i=0;i<len/2;i++)
        if(s[i]!=s[len-i-1])
            return 0;

    return 1;
}

int search(char s[],char ch)
{
    int i;

    for(i=0;s[i]!='\0';i++)
        if(s[i]==ch)
            return 1;

    return 0;
}

int main()
{
    char s1[100],s2[100],ch;

    printf("Enter string: ");
    scanf("%s",s1);

    printf("Length = %d\n",length(s1));

    copy(s1,s2);
    printf("Copy = %s\n",s2);

    printf("Reverse = ");
    reverse(s1);

    upper(s1);
    printf("\nUpper = %s\n",s1);

    if(palindrome(s1))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    printf("Enter character to search: ");
    scanf(" %c",&ch);

    if(search(s1,ch))
        printf("Character Found\n");
    else
        printf("Character Not Found\n");

    return 0;
}
