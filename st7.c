#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p;
    float distance;

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &p.x, &p.y);

    distance = sqrt(p.x * p.x + p.y * p.y);

    printf("Distance from origin = %.2f\n", distance);

    return 0;
}
