#include<stdio.h>
int main()
{
    float n;

    float sum=0;
    int count;

    for(int i=0; i<=5; i++)
    {
        scanf("%f", &n);

        if(n > 0)
        {     
        sum = sum+n;
        count++;
        }

    }
    
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum/count);
    
    

    return 0;
}