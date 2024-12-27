#include<stdio.h>
int main()
{
    int amount, a, b, c, d, e, f, g;

    scanf("%d", &amount);

    //100, 50, 20, 10, 5, 2, 1
    a= amount%100;//76
    b= a%50;//26
    c= b%20;//6
    d= c%10;//6
    e= d%5;//1
    f= e%2;//1
    g= f%1;//0

    printf("%d\n", amount);

    //100 tk note
    printf("%d nota(s) de R$ 100,00\n", (amount-a)/100);

    //50 tk note
    printf("%d nota(s) de R$ 50,00\n", (a-b)/50);

    //20 tk note
    printf("%d nota(s) de R$ 20,00\n", (b-c)/20);

    //10 tk note
    printf("%d nota(s) de R$ 10,00\n", (c-d)/10);

    //5 tk note
    printf("%d nota(s) de R$ 5,00\n", (d-e)/5);

    //2 tk note
    printf("%d nota(s) de R$ 2,00\n", (e-f)/2);

    //1 tk note
    printf("%d nota(s) de R$ 1,00\n", (f-g)/1);



    return 0;
}
