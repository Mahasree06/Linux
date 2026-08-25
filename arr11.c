#include <stdio.h>

int main()
{
    int a[100], n, i, temp;
    int start, end;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    start = 0;
    end = n - 1;

    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
