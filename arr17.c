#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];
    secondLargest = INT_MIN;

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest = %d", secondLargest);

    return 0;
}
