#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *calculate(void *arg)
{
    int n = *(int *)arg;

    int *result = malloc(sizeof(int));

    *result = n * n;

    return result;
}

int main()
{
    pthread_t thread;

    int n = 10;
    void *result;

    pthread_create(&thread, NULL, calculate, &n);

    pthread_join(thread, &result);

    printf("Calculated value = %d\n", *(int *)result);

    free(result);

    return 0;
}
