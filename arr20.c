#include <stdio.h>

int main()
{
    int a[100], n, i, descending = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i + 1])
        {
            descending = 0;
            break;
        }
    }

    if(descending)
        printf("Array is in descending order");
    else
        printf("Array is not in descending order");

    return 0;
}
