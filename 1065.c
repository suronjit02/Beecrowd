#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int sum1, sum2, sum3, sum4, sum5;
    if(a%2==0){
        sum1=1;
    }else
    sum1=0;
    if(b%2==0){
        sum2=1;
    }else
        sum2=0;
    if(c%2==0){
        sum3=1;
    }else
        sum3=0;

    if(d%2==0){
        sum4=1;
    }else
        sum4=0;
    if(e%2==0){
        sum5=1;
    }else
        sum5=0;

    printf("%d valores pares\n", (sum1+sum2+sum3+sum4+sum5));

    return 0;
}

