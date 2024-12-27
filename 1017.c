#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    float distance, liter;

    distance=a*b;
    liter= distance/12;
    printf("%.3f\n", liter);

    return 0;
}
