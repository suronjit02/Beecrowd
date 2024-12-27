#include <stdio.h>

int main() {

   int num, hour;
   float vph, salary;
   scanf("%d%d%f", &num,&hour,&vph);
   salary=(hour*vph);
   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %.2f\n",salary);


    return 0;
}

