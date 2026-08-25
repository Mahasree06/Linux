#include <stdio.h>

int main()
{
    int a[100], n, i, ascending = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            ascending = 0;
            break;
        }
    }

    if(ascending)
        printf("Array is in ascending order");
    else
        printf("Array is not in ascending order");

    return 0;
}
