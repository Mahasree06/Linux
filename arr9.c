#include <stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}
