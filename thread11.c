#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct Data {
    int *arr;
    int size;
};

void *calculate_sum(void *arg)
{
    struct Data *data = (struct Data *)arg;

    int *sum = malloc(sizeof(int));
    *sum = 0;

    for (int i = 0; i < data->size; i++)
        *sum += data->arr[i];

    pthread_exit(sum);
}

int main()
{
    pthread_t thread;

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    struct Data data = {arr, size};

    void *result;

    pthread_create(&thread, NULL, calculate_sum, &data);
    pthread_join(thread, &result);

    printf("Sum = %d\n", *(int *)result);

    free(result);

    return 0;
}
