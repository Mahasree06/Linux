#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define WORKERS 3
#define TASKS 10

void *worker(void *arg)
{
    int worker_id = *(int *)arg;

    for (int task = worker_id; task <= TASKS; task += WORKERS) {
        printf("Task %d executed by Worker %d\n",
               task, worker_id);

        sleep(1);
    }

    return NULL;
}

int main()
{
    pthread_t threads[WORKERS];
    int ids[WORKERS];

    for (int i = 0; i < WORKERS; i++) {
        ids[i] = i + 1;

        pthread_create(&threads[i], NULL,
                       worker, &ids[i]);
    }

    for (int i = 0; i < WORKERS; i++)
        pthread_join(threads[i], NULL);

    printf("All 10 tasks completed\n");

    return 0;
}
