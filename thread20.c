#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define QUEUE_SIZE 5
#define NUM_WORKERS 3
#define NUM_TASKS 10

int queue[QUEUE_SIZE];

int front = 0;
int rear = 0;
int count = 0;

int producer_done = 0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

pthread_cond_t not_empty = PTHREAD_COND_INITIALIZER;
pthread_cond_t not_full = PTHREAD_COND_INITIALIZER;


void *producer(void *arg)
{
    for (int task = 1; task <= NUM_TASKS; task++) {

        pthread_mutex_lock(&mutex);

        while (count == QUEUE_SIZE)
            pthread_cond_wait(&not_full, &mutex);

        queue[rear] = task;
        rear = (rear + 1) % QUEUE_SIZE;
        count++;

        printf("Producer added Task %d\n", task);

        pthread_cond_signal(&not_empty);

        pthread_mutex_unlock(&mutex);

        sleep(1);
    }

    pthread_mutex_lock(&mutex);

    producer_done = 1;

    pthread_cond_broadcast(&not_empty);

    pthread_mutex_unlock(&mutex);

    return NULL;
}


void *worker(void *arg)
{
    int worker_id = *(int *)arg;

    while (1) {

        pthread_mutex_lock(&mutex);

        while (count == 0 && !producer_done)
            pthread_cond_wait(&not_empty, &mutex);

        if (count == 0 && producer_done) {
            pthread_mutex_unlock(&mutex);
            break;
        }

        int task = queue[front];

        front = (front + 1) % QUEUE_SIZE;
        count--;

        pthread_cond_signal(&not_full);

        pthread_mutex_unlock(&mutex);

        printf("Worker %d executing Task %d\n",
               worker_id, task);

        sleep(1);
    }

    printf("Worker %d terminated\n", worker_id);

    return NULL;
}


int main()
{
    pthread_t producer_thread;
    pthread_t workers[NUM_WORKERS];

    int worker_ids[NUM_WORKERS];

    /* Create worker threads */
    for (int i = 0; i < NUM_WORKERS; i++) {

        worker_ids[i] = i + 1;

        pthread_create(&workers[i],
                       NULL,
                       worker,
                       &worker_ids[i]);
    }

    /* Create producer */
    pthread_create(&producer_thread,
                   NULL,
                   producer,
                   NULL);

    /* Wait for producer */
    pthread_join(producer_thread, NULL);

    /* Wait for workers */
    for (int i = 0; i < NUM_WORKERS; i++)
        pthread_join(workers[i], NULL);

    printf("All tasks completed\n");

    return 0;
}
