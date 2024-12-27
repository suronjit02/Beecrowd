#include<stdio.h>
int main()
{
    int n, p, max=0;

    for(int i=1; i<=100; i++)
    {
        scanf("%d", &n);

        if(max < n)
        {
            max = n;
            p=i;
        }
    }
    printf("%d\n%d\n", max, p);
    

    return 0;
}