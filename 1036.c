#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, rot, root, r1, r2;
    scanf("%f %f %f", &a, &b, &c);

    rot = ((b*b)-(4*a*c));
    root = sqrt(rot);

    r1 = (-b+root)/(2*a);

    r2 = (-b-root)/(2*a);

    if(root>0 && a !=0)
    {

    printf("R1 = %.5f\n", r1);
    printf("R2 = %.5f\n", r2);

    } else{
        printf("Impossivel calcular\n");
    }


    return 0;
}
