#include<stdio.h>
int main()
{
    int n, x, y, a, b;

    scanf("%d", &n);

    for(int i = 0;i<n;i++){

        scanf("%d %d", &x, &y);


        int sum = 0;

        if(x>y){

            a = y;
            b = x;
        }else{
            a = x;
            b = y;
        }



        for(int j = a+1 ; j<b;j++){

                if(j%2==1){

                    sum+=j;
                }

        }

        printf("%d\n", sum);


    }




    return 0;
}
