#include <stdio.h>
#include <pthread.h>

void *printNumbers(void *arg)
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return NULL;
}

void *printAlphabets(void *arg)
{
    for (char c = 'A'; c <= 'E'; c++)
    {
        printf("%c ", c);
    }

    printf("\n");

    return NULL;
}

void *printMessage(void *arg)
{
    printf("Hello from message thread\n");

    return NULL;
}

int main()
{
    pthread_t t1, t2, t3;

    pthread_create(&t1, NULL, printNumbers, NULL);
    pthread_create(&t2, NULL, printAlphabets, NULL);
    pthread_create(&t3, NULL, printMessage, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    return 0;
}
