#include <stdio.h>
int main()
{
    int pasward[4];

    do
    {
        scanf("%d", &pasward[4]);

        if (pasward[4] == 2002){
            printf("Acesso Permitido\n");
            break;
        }

        if (pasward[4] != 2002)
            printf("Senha Invalida\n");

    } while (1);

    return 0;
}

//         Senha Invalida
//         Acesso Permitido