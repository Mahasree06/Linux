#include<stdio.h>

int digits(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
        if(str[i]>='0'&&str[i]<='9')
            count++;

    return count;
}

int alphabets(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            count++;

    return count;
}

int special(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(!((str[i]>='A'&&str[i]<='Z')||
             (str[i]>='a'&&str[i]<='z')||
             (str[i]>='0'&&str[i]<='9')||
             str[i]==' '||str[i]=='\n'))
            count++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("Digits = %d\n",digits(str));
    printf("Alphabets = %d\n",alphabets(str));
    printf("Special Characters = %d\n",special(str));

    return 0;
}
