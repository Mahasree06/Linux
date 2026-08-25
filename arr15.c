#include <stdio.h>

int main()
{
    int a[100], n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
            evenSum += a[i];
        else
            oddSum += a[i];
    }

    printf("Sum of even elements = %d\n", evenSum);
    printf("Sum of odd elements = %d", oddSum);

    return 0;
}
