#include <stdio.h>

int main()
{

    int a, b;

    do  {
        scanf("%d%d", &a ,&b);
        if(a<1 || b<1)

            break;

        if (a > b)
        {
            a = a + b;
            b = a - b;
            a = a - b;
        }

        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);

    } while (1);

    
    return 0;
}