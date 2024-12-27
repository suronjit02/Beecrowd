#include<stdio.h>
int main()
{
    int second1, minute1, hour1, day1, second2, minute2, hour2, day2;

    char dia1[5], dia2[5], colon[5];

    scanf("%s %d %d %s %d %s %d", &dia1, &day1, &hour1, &colon, &minute1, &colon, &second1);

    scanf("%s %d %d %s %d %s %d", &dia2, &day2, &hour2, &colon, &minute2, &colon, &second2);

    int startsecond = ((day1*86400)+(hour1*3600)+(minute1*60)+second1);
    int endsecond = ((day2*86400)+(hour2*3600)+(minute2*60)+second2);

    int totalsecond = (endsecond-startsecond);

    int day, hour, minute, second;

    day = ((totalsecond - (totalsecond % 86400)) / 86400);

    int for_hour_second = ((totalsecond - (day*86400)));

    hour = ((for_hour_second - (for_hour_second % 3600)) / 3600);

    int for_mnt_second = ((totalsecond - ((day*86400)+hour*3600)));

    minute = (((for_mnt_second - (for_mnt_second%60)) / 60));

    second = ((totalsecond - ((day*86400)+(hour*3600)+(minute*60))));

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);

    
    return 0;
}