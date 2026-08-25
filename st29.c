#include <stdio.h>

struct A {
    char c;
    int i;
};

struct B {
    int i;
    char c;
};

struct C {
    char c1;
    char c2;
    int i;
};

int main() {
    printf("Size of struct A = %zu bytes\n", sizeof(struct A));
    printf("Size of struct B = %zu bytes\n", sizeof(struct B));
    printf("Size of struct C = %zu bytes\n", sizeof(struct C));

    return 0;
}
