#include<stdio.h>
int main()
{
    float score1, score2, score3, score4, newscore, avarage, newavarage;

    scanf("%f %f %f %f", &score1, &score2, &score3, &score4);

    avarage = ((score1*2)+(score2*3)+(score3*4)+(score4*1)) / (2+3+4+1);

    printf("Media: %.1f\n", avarage);

    if(avarage>=5.0 && avarage<7)
    {
        
        printf("Aluno em exame.\n");

        scanf("%f", &newscore);
        printf("Nota do exame: %.1f\n", newscore);

        newavarage = ((newscore+avarage)/2);

        if(newavarage>=5.0)
        {
        printf("Aluno aprovado.\n");
        }else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", newavarage);

    }

    if(avarage>=7)
    {
        printf("Aluno aprovado.\n");
    }

    if(avarage<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    

    return 0;
}
