#include <stdio.h>

int main()

{
    float i, j, b;

    for (i = 0; i < 2.1; i += 0.2)
    {
        for (j = 1; j <= 3; j++)
        {
            b = i + j;

            if ((0 < i && i < 1) || (1 < i && i < 2))
                printf("I=%.1f J=%.1f\n", i, b);

            else
                printf("I=%d J=%d\n", (int)i, (int)b);
        }
    }

    return 0;
}