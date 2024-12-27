#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    if(a<b && b<c)
    {
        printf("%d\n%d\n%d\n\n", a, b, c);
    }
    if(a<c && c<b)
    {
        printf("%d\n%d\n%d\n\n", a,c,b);
    }
    if(b<a && a<c)
    {
        printf("%d\n%d\n%d\n\n", b,a,c);
    }
    if(b<c && c<a)
    {
        printf("%d\n%d\n%d\n\n", b,c,a);
    }
    if(c<a && a<b)
    {
        printf("%d\n%d\n%d\n\n", c,a,b);
    }
    if(c<b && b<a)
    {
        printf("%d\n%d\n%d\n\n", c,b,a);
    }

    printf("%d\n%d\n%d\n", a, b, c);



    return 0;
}
