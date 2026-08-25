#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char **names;

    printf("Enter number of students: ");
    scanf("%d", &n);

    names = (char **)malloc(n * sizeof(char *));

    if (names == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        names[i] = (char *)malloc(30 * sizeof(char));

        if (names[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter name of student %d: ", i + 1);
        scanf(" %29[^\n]", names[i]);
    }

    printf("\nStudent Names:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
        free(names[i]);
    }

    free(names);

    return 0;
}
