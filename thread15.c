#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct Data {
    int arr[10];
    int size;
};

void *calculate_average(void *arg)
{
    struct Data *data = (struct Data *)arg;

    float *average = malloc(sizeof(float));
    int sum = 0;

    for (int i = 0; i < data->size; i++)
        sum += data->arr[i];

    *average = (float)sum / data->size;

    return average;
}

int main()
{
    pthread_t thread;

    struct Data data = {
        {10, 20, 30, 40, 50},
        5
    };

    void *result;

    pthread_create(&thread, NULL, calculate_average, &data);
    pthread_join(thread, &result);

    printf("Average = %.2f\n", *(float *)result);

    free(result);

    return 0;
}
