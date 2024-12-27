#include<stdio.h>
int main()
{
    float salary, tax;
    scanf("%f", &salary);

    if(salary <=2000.00)
    printf("Isento\n");
    

    if(salary >= 2000.01 && salary <= 3000.00)
    {
        tax = (salary-2000)*0.08;
        printf("R$ %.2f\n", tax);
    }

    if(salary >= 3000.01 && salary <= 4500.00)
    {
        float tax1 = ((salary-2000) - 1000) * 0.18;
        float tax2 = 1000 * 0.08;

        printf("R$ %.2f\n", tax1+tax2);
    }

    if(salary > 4500.00)
    {
        float tax1 = ((salary-2000) - 2500) * 0.28;
        float tax2 = 1500 * 0.18;
        float tax3 = 1000 * 0.08;

        printf("R$ %.2f\n", tax1+tax2+tax3);
    }


    return 0;
}