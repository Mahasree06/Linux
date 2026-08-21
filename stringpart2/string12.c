#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 1;

    printf("Enter first username: ");
    scanf("%s", str1);

    printf("Enter second username: ");
    scanf("%s", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("Strings are identical");
    else
        printf("Strings are different");

    return 0;
}
