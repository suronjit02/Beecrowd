#include<stdio.h>
#include<math.h>

int main() {

    double x1, x2, y1, y2, x2x1, y2y1, sum, sqrot;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x2x1= (x2-x1)*(x2-x1);
    y2y1= (y2-y1)*(y2-y1);

    sum= (x2x1+y2y1);
    sqrot= sqrt(sum);

    printf("%.4lf\n", sqrot);

    return 0;
}
