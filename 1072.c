#include<stdio.h>
int main()
{
    int data, test, in=0, out=0;
    scanf("%d", &test);
    for(int i=1; i<=test; i++)
    {
        scanf("%d", &data);

        if(data>9 && data<21)
        {
            in++;
        }
        else if(data<=9 || data>=21)
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}

