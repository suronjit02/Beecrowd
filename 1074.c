#include<stdio.h>
int main()
{
    int a, n;

    scanf("%d", &a);

    for(int i=1; i<=a; i++)
    {
        scanf("%d", &n);

        if(n==0)
        printf("NULL\n");

        if((n>0) && (n%2==0))
        printf("EVEN POSITIVE\n");

        if((n<0) && (n%2==0))
        printf("EVEN NEGATIVE\n");

        if((n<0) && (n%2!=0))
        printf("ODD NEGATIVE\n");

        if((n>0) && (n%2!=0))
        printf("ODD POSITIVE\n");


    }
    

    return 0;
}




// ODD NEGATIVE
// NULL
// ODD POSITIVE
// EVEN NEGATIVE