#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, a2, b2, c2, tem;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a<b){tem=a; a=b; b=tem;}
    if(a<c){tem=a; a=c; c=tem;}
    if(b<c){tem=b; b=c; c=tem;}

    a2 = pow(a,2);
    b2 = pow(b,2);
    c2 = pow(c,2);

    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }else{
    if (a2 == (b2 + c2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if (a2 > (b2 + c2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (a2 < (b2 + c2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if ((a == b)&&(b == c)&&(c == a))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((a==b && a!=c) || (b==c && c!=a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}

/*
-if A ≥ B + C, write the message: NAO FORMA TRIANGULO
-if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
-if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
-if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
-if the three sides are the same size, write the message: TRIANGULO EQUILATERO
if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
*/
