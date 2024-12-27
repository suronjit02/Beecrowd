#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", 2);

    for(int i=1; i<=10000; i++)
    {
        if(i%n==0)
        {
            printf("%d\n", i+2);
        }
    }


    return 0;
}