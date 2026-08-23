#include <stdio.h>
#include <pthread.h>

struct Data {
    int *arr;
    int size;
};

struct Result {
    int max;
    int min;
};

void *find_max_min(void *arg)
{
    struct Data *data = (struct Data *)arg;

    static struct Result result;

    result.max = data->arr[0];
    result.min = data->arr[0];

    for (int i = 1; i < data->size; i++) {
        if (data->arr[i] > result.max)
            result.max = data->arr[i];

        if (data->arr[i] < result.min)
            result.min = data->arr[i];
    }

    return &result;
}

int main()
{
    pthread_t thread;

    int arr[] = {25, 10, 45, 5, 30};

    struct Data data;
    data.arr = arr;
    data.size = 5;

    struct Result *result;

    pthread_create(&thread, NULL, find_max_min, &data);
    pthread_join(thread, (void **)&result);

    printf("Maximum = %d\n", result->max);
    printf("Minimum = %d\n", result->min);

    return 0;
}
