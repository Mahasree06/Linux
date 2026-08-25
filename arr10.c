#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Reverse order:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}
