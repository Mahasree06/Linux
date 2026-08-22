#include <stdio.h>
#include <pthread.h>

void *calculate(void *arg)
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return NULL;
}

int main()
{
    pthread_t t1;

    pthread_create(&t1, NULL, calculate, NULL);

    pthread_join(t1, NULL);

    return 0;
}
