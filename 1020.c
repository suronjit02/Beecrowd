#include<stdio.h>
int main()
{
    int tday, exday1, exday2;
    scanf("%d", &tday);

    exday1= tday%365;
    exday2= exday1%30;
    //year
    printf("%d ano(s)\n", (tday-exday1)/365);

    //month
    printf("%d mes(es)\n", (exday1-exday2)/30);

    //day
    printf("%d dia(s)\n", exday2);

    return 0;
}
