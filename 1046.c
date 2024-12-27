#include<stdio.h>
int main()
{
    int a, b, hour;
    scanf("%d%d", &a, &b);

    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a<b)
    {
        hour=b-a;
        printf("O JOGO DUROU %d HORA(S)\n", hour);
    }
    else if(a>b)
    {
        hour = (24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n", hour);
    }


    return 0;
}
