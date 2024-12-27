#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if(a%2==0)
    {
        int i, x = a+1, y = x+10;
        for(i=x; i<=y; i+=2)
        {
            printf("%d\n", i);

        }
    }else if(a%2!=0)
    {
        int i, x = a+10;
        for(i=a; i<=x; i+=2)
            printf("%d\n", i);
    }

    return 0;
}

