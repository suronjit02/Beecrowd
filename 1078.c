#include<stdio.h>
int main()
{
    int n, multiplies;
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
    {
        multiplies = i*n;

        printf("%d x %d = %d\n", i, n, multiplies);

    }




    return 0;
}
