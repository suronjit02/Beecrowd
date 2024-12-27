// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int age;
    float avg;
    int sum = 0;
    float i = 0;

    do
    {

        scanf("%d", &age);

        if (age < 0)
            break;

        sum = sum + age;

        i++;

    } while (1);

    avg = sum / i;

    printf("%.2f\n", avg);

    return 0;
}
