#include<stdio.h>
int main()
{
    float w[5], sum;
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum = 0;
        for(int j=0; j<3; j++)
        {
            scanf("%f", &w[j]);
        }
        w[0] = w[0]*2;
        w[1] = w[1]*3;
        w[2] = w[2]*5;

        for(int j=0; j<3; j++)
        {
            sum = sum + w[j];
        }

        printf("%.1f\n", (sum/10));
     }

    return 0;
}
