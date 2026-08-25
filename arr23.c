#include <stdio.h>

int main()
{
    int a[100], n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to remove: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            for(j = i; j < n - 1; j++)
                a[j] = a[j + 1];

            n--;
            i--;
        }
    }

    printf("Array after removing occurrences:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
