#include <stdio.h>

int main() {

    char name[50];
    double sallary, sales;
    scanf("%s%lf%lf",name,&sallary,&sales);
    double bonous = (sales*0.15);
    printf("TOTAL = R$ %.2lf\n", sallary+bonous);

    return 0;
}
