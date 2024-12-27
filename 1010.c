#include<stdio.h>

int main() {

    int code1, code2, unit1, unit2;
    double price1, price2, total1, total2;
    scanf("%d %d %lf2",&code1,&unit1,&price1);
    scanf("%d %d %lf2",&code2,&unit2,&price2);
    total1= (unit1*price1);
    total2= (unit2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total1+total2);

    return 0;
}
