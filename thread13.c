#include <stdio.h>
#include <pthread.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void *student_details(void *arg)
{
    struct Student *student = (struct Student *)arg;

    printf("Name  : %s\n", student->name);
    printf("Age   : %d\n", student->age);
    printf("Marks : %.2f\n", student->marks);

    if (student->marks >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return NULL;
}

int main()
{
    pthread_t thread;

    struct Student student = {
        "Mahasree",
        20,
        85.5
    };

    pthread_create(&thread, NULL, student_details, &student);

    pthread_join(thread, NULL);

    return 0;
}
