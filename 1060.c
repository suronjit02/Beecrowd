#include<stdio.h>
int main()
{
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    int sum1, sum2, sum3, sum4, sum5, sum6;
    if(a>=0){
        sum1=1;
    }else
    sum1=0;
    if(b>=0){
        sum2=1;
    }else
        sum2=0;
    if(c>=0){
        sum3=1;
    }else
        sum3=0;

    if(d>=0){
        sum4=1;
    }else
        sum4=0;
    if(e>=0){
        sum5=1;
    }else
        sum5=0;
    if(f>=0){
        sum6=1;
    }else
        sum5=0;

    printf("%d valores positivos\n", (sum1+sum2+sum3+sum4+sum5+sum6));

    return 0;
}
