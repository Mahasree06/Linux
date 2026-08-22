#include <stdio.h>
#include <pthread.h>

void *hello(void *arg)
{
    char *name = (char *)arg;

    printf("Hello %s\n", name);

    return NULL;
}

int main()
{
    pthread_t t1;
    char name[] = "Maha";

    pthread_create(&t1, NULL, hello, name);

    pthread_join(t1, NULL);

    return 0;
}
