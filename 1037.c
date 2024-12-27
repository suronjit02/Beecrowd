#include<stdio.h>
int main()
{
    float num;
    scanf("%f", &num);

    if((num>=0 && num<=25))
    {
        printf("Intervalo [0,25]\n");
    }

    else if((num>25 && num<=50))
    {
        printf("Intervalo (25,50]\n");
    }

    else if((num>50 && num<=75))
    {
        printf("Intervalo [50,75]\n");
    }

    else if((num>75 && num<=100))
    {
        printf("Intervalo (75,100]\n");
    }

    else if((num>100 || num<0))
    {
        printf("Fora de intervalo\n");
    }

    /*You must make a program that read a float-point number
    and print a message saying in which of following intervals
    the number belongs: [0,25] (25,50], (50,75], (75,100].
    If the read number is less than zero or greather than 100,
    the program must print the message “Fora de intervalo” that means "Out of Interval".*/

    return 0;
}
