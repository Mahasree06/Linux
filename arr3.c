#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}
