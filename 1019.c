#include<stdio.h>
int main()
{
    int sec, min, hour, extra1, extra2;
    scanf("%d", &sec);//3700

    extra1=(sec%3600);//100 sec
    extra2=extra1%60;//40 sec

    hour= (sec-extra1)/3600;
    printf("%d:", hour);

    min= (extra1-extra2)/60;
    printf("%d:", min);

    printf("%d\n", extra2);

    return 0;
}
