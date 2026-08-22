#include <stdio.h>
#include <pthread.h>

void *task(void *arg)
{
    printf("Thread is running\n");
    return NULL;
}

int main()
{
    pthread_t t1;

    pthread_create(&t1, NULL, task, NULL);

    printf("Main is waiting...\n");

    pthread_join(t1, NULL);

    printf("Thread completed\n");

    return 0;
}
