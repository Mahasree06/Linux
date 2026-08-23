#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define NUM_WORKERS 4
#define NUM_TASKS 8

void *worker(void *arg)
{
    int worker_id = *(int *)arg;

    for (int task = worker_id; task <= NUM_TASKS; task += NUM_WORKERS) {
        printf("Worker %d executing Task %d\n",
               worker_id, task);

        sleep(1);
    }

    return NULL;
}

int main()
{
    pthread_t workers[NUM_WORKERS];
    int worker_id[NUM_WORKERS];

    for (int i = 0; i < NUM_WORKERS; i++) {
        worker_id[i] = i + 1;

        pthread_create(&workers[i], NULL,
                       worker, &worker_id[i]);
    }

    for (int i = 0; i < NUM_WORKERS; i++)
        pthread_join(workers[i], NULL);

    printf("All tasks completed\n");

    return 0;
}
