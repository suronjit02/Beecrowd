#include<stdio.h>
int main()
{
    float input, salary;
    char p = '%';
    scanf("%f", &input);
    
    if(input>0 && input<=400.00)
    {
        salary = (15*input)/100;
        printf("Novo salario: %.2f\n", (salary+input));
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 15 %c\n", p);
    }
    if(input>400.00 && input<=800.00)
    {
        salary = (12*input)/100;
        printf("Novo salario: %.2f\n", (salary+input));
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 12 %c\n", p);
    }
    if(input>800.00 && input<=1200.00)
    {
        salary = (10*input)/100;
        printf("Novo salario: %.2f\n", (salary+input));
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 10 %c\n", p);
    }
    if(input>1200.00 && input<=2000.00)
    {
        salary = (7*input)/100;
        printf("Novo salario: %.2f\n", (salary+input));
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 7 %c\n", p);
    }
    if(input>2000.00)
    {
        salary = (4*input)/100;
        printf("Novo salario: %.2f\n", (salary+input));
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 4 %c\n", p);
    }

    return 0;
}
/*Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %
*/