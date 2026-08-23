#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *joinable_function(void *arg)
{
    printf("Joinable thread is running\n");
    sleep(2);
    printf("Joinable thread completed\n");

    return NULL;
}

void *detached_function(void *arg)
{
    printf("Detached thread is running\n");
    sleep(1);
    printf("Detached thread completed\n");

    return NULL;
}

int main()
{
    pthread_t joinable_thread;
    pthread_t detached_thread;

    /* Default thread is joinable */
    pthread_create(&joinable_thread, NULL,
                   joinable_function, NULL);

    /* Create another thread */
    pthread_create(&detached_thread, NULL,
                   detached_function, NULL);

    /* Detach the second thread */
    pthread_detach(detached_thread);

    /* Wait for joinable thread */
    pthread_join(joinable_thread, NULL);

    printf("Main thread completed\n");

    return 0;
}
