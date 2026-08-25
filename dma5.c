#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    // Allocate memory for 3 integers
    arr = malloc(3 * sizeof(int));
    printf("arr = %p\n",arr);
    printf("& arr = %p\n",&arr);
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Store values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Before realloc:\n");
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    // Resize memory for 5 integers
    int *temp = realloc(arr, 5 * sizeof(int));
    printf("temp = %p\n",temp);
    printf("&temp =%p\n",&temp);
    if (temp == NULL)
    {
        printf("\nReallocation failed\n");
        free(arr);
        return 1;
    }

    arr = temp;
    printf("temp = %p\n",temp);
    printf("&temp = %p\n",&temp);
    printf("arr= %p\n",arr);
    printf("&arr = %p\n",&arr);
    // Store new values
    arr[3] = 40;
    arr[4] = 50;

    printf("\n\nAfter realloc:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    // Release memory
    free(arr);

    return 0;
}
