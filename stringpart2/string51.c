#include<stdio.h>

int anagram(char s1[],char s2[])
{
    int f1[26]={0},f2[26]={0};
    int i;

    for(i=0;s1[i]!='\0';i++)
        if(s1[i]>='a'&&s1[i]<='z')
            f1[s1[i]-'a']++;

    for(i=0;s2[i]!='\0';i++)
        if(s2[i]>='a'&&s2[i]<='z')
            f2[s2[i]-'a']++;

    for(i=0;i<26;i++)
        if(f1[i]!=f2[i])
            return 0;

    return 1;
}

int main()
{
    char s1[100],s2[100];

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    if(anagram(s1,s2))
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}
