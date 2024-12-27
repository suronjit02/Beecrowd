#include<stdio.h>
int main()
{
    int input, posi=0, neg=0, odd=0, even=0;

    for(int i=1; i<=5; i++)
    {
        scanf("%d", &input);
        if(input>0)
        {
            posi++;
        }
        if(input<0)
        {
            neg++;
        }

        if(input%2!=0)
        {
            odd++;
        }
        if(input%2==0)

        {
            even++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
