#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    int *num = (int *)arg;

    printf("Thread %d\n", *num);

    return NULL;
}

int main()
{
    pthread_t threads[5];
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i + 1;

        pthread_create(
            &threads[i],
            NULL,
            task,
            &numbers[i]
        );
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
