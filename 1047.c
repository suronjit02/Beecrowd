#include<stdio.h>
int main()
{
    int a, b, c, d, st, et, hour, minute, day, fulm;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    st = (a*60)+b;
    et = (c*60)+d;
    day = (24*60);

    if(st==et)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(st<et)
    {
        minute = (et-st)%60;
        hour = ((et-st)-minute)/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }
    else if(st>et)
    {
        fulm = (day-st)+et;
        minute = fulm%60;
        hour = (fulm-minute)/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }


    return 0;
}

