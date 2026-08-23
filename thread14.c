#include <stdio.h>
#include <pthread.h>

#define SIZE 20
#define THREADS 5

int arr[SIZE] = {
    1, 2, 3, 4,
    5, 6, 7, 8,
    9, 10, 11, 12,
    13, 14, 15, 16,
    17, 18, 19, 20
};

struct Data {
    int start;
    int end;
};

int partial_sum[THREADS];

void *calculate_sum(void *arg)
{
    struct Data *data = (struct Data *)arg;

    int index = data->start / 4;

    partial_sum[index] = 0;

    for (int i = data->start; i < data->end; i++)
        partial_sum[index] += arr[i];

    printf("Thread %d sum = %d\n", index + 1, partial_sum[index]);

    return NULL;
}

int main()
{
    pthread_t threads[THREADS];
    struct Data data[THREADS];

    for (int i = 0; i < THREADS; i++) {
        data[i].start = i * 4;
        data[i].end = (i + 1) * 4;

        pthread_create(&threads[i], NULL, calculate_sum, &data[i]);
    }

    int total = 0;

    for (int i = 0; i < THREADS; i++) {
        pthread_join(threads[i], NULL);
        total += partial_sum[i];
    }

    printf("Total Sum = %d\n", total);

    return 0;
}
