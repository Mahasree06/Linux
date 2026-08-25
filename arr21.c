#include <stdio.h>

int main()
{
    int a[100], n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    for(i = n; i > position; i--)
        a[i] = a[i - 1];

    a[position] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
