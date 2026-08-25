#include <stdio.h>

int main()
{
    int a[100], n, i, constant;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter constant: ");
    scanf("%d", &constant);

    for(i = 0; i < n; i++)
        a[i] = a[i] * constant;

    printf("Updated array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
