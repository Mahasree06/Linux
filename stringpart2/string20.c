#include<stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A']++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    printf("Alphabet Frequencies:\n");

    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
            printf("%c = %d\n", i + 'A', freq[i]);
    }

    return 0;
}
