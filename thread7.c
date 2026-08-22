#include <stdio.h>
#include <pthread.h>

void *printElement(void *arg)
{
    int *value = (int *)arg;

    printf("Element = %d\n", *value);

    return NULL;
}

int main()
{
    pthread_t threads[5];

    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        pthread_create(
            &threads[i],
            NULL,
            printElement,
            &arr[i]
        );
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
