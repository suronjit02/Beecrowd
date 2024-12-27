#include <stdio.h>

int main() {

    double a, b, c, av;
    scanf("%lf%lf%lf", &a, &b, &c);
    av=(a*2+b*3+c*5)/(2+3+5);
    printf("MEDIA = %.1lf\n", av);

    return 0;
}
