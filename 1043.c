#include<stdio.h>

int main()
{
    float a, b, c, s, x, y;
    scanf("%f%f%f", &a, &b, &c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
       s = a+b+c;

       printf("Perimetro = %.1f\n", s);

    }else{
        x = ((a+b)/2)*c;

        printf("Area = %.1f\n", x);

    }



    return 0;
}
