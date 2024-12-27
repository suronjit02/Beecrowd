#include<stdio.h>
int main()
{
    int b;
    for(int i=1, b=7; i<=9; i+=2, b+=2)
    {
        for(int j=b; j>=(b-2); j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }



    return 0;
}