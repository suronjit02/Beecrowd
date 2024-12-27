#include <stdio.h>

int main()
{
    int amount, n;
    char name;

    scanf("%d", &n);

    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %c", &amount, &name);

        if (name == 'C')
        {
            coelhos += amount;
        }
        if (name == 'R')
        {
            ratos += amount;
        }
        if (name == 'S')
        {
            sapos += amount;
        }
    }

    int total = (coelhos + ratos + sapos);

    double par1 = ((double)coelhos / (double)total) * 100;
    double par2 = ((double)ratos / (double)total) * 100;
    double par3 = ((double)sapos / (double)total) * 100;

    printf("Total: %d cobaias\n", total);

    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2lf %\n", par1);

    printf("Percentual de ratos: %.2lf %\n", par2);

    printf("Percentual de sapos: %.2lf %\n", par3);

    return 0;
}

// 10 10 C 6 R 15 S 5 C 14 R 9 C 6 R 8 S 5 C 14 R