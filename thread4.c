#include <stdio.h>
#include <pthread.h>

void *square(void *arg)
{
    int *num = (int *)arg;

    printf("Square = %d\n", (*num) * (*num));

    return NULL;
}

int main()
{
    pthread_t t1;
    int x = 5;

    pthread_create(&t1, NULL, square, &x);

    pthread_join(t1, NULL);

    return 0;
}
