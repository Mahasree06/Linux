#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    smallest = a[0];
    secondSmallest = INT_MAX;

    for(i = 1; i < n; i++)
    {
        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < secondSmallest)
        {
            secondSmallest = a[i];
        }
    }

    printf("Second smallest = %d", secondSmallest);

    return 0;
}
