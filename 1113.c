#include <stdio.h>
int main()
{
    int a, b;

    do
    {
        scanf("%d%d", &a, &b);

        if (a < b)
            printf("Crescente\n");

        if (a > b)
            printf("Decrescente\n");

        if (a == b)
            break;
    } while (1);

   

    return 0;
}

// Decrescente
//     Decrescente Crescente