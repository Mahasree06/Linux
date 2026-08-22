#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    pthread_t id = pthread_self();

    printf("Thread ID: %lu\n", (unsigned long)id);

    return NULL;
}

int main()
{
    pthread_t threads[10];

    for (int i = 0; i < 10; i++)
    {
        pthread_create(
            &threads[i],
            NULL,
            task,
            NULL
        );
    }

    for (int i = 0; i < 10; i++)
    {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
