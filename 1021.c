#include<stdio.h>
int main()
{
    double amount;
    int note[7]={100,50,20,10,5,2,1}, money_note[7];
    int coin[5]={50,25,10,5,1}, money_coin[5];

    scanf("%lf", &amount);//576.73

    int a = amount;

    for(int i=0; i<7; i++)
    {
        money_note[i] = a/note[i];
        a = a%note[i];
    }
    a = amount*100;
    a = a%100;
    for(int i=0; i<5; i++)
    {
        money_coin[i] = a/coin[i];
        a = a%coin[i];
    }

    printf("NOTAS:\n");

    for(int i=0; i<6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n", money_note[i], note[i]);
    }

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n", money_note[6], (float)note[6]);

    for(int i=0; i<5; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", money_coin[i], (float)coin[i]/100);
    }


    return 0;
}
/*
 NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01


 Read a value of floating point with two decimal places.
This represents a monetary value. After this,
calculate the smallest possible number of notes and
coins on which the value can be decomposed.
The considered notes are of 100, 50, 20, 10, 5, 2.
The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and
0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:”
 followed by the list of coins.
 */

