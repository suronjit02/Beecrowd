#include<stdio.h>
int main()
{
    char clue1[20], clue2[20], clue3[20];

    scanf("%s", clue1);
    scanf("%s", clue2);
    scanf("%s", clue3);

    if (clue1[0] == 'v' && clue2[0] == 'a' && clue3[0] == 'c')
    printf("aguia\n");
    
    if (clue1[0] == 'v' && clue2[0] == 'a' && clue3[0] == 'o')
    printf("pomba\n");
    
    if (clue1[0] == 'v' && clue2[0] == 'm' && clue3[0] == 'o')
    printf("homem\n");
    
    if (clue1[0] == 'v' && clue2[0] == 'm' && clue3[0] == 'h')
    printf("vaca\n");
    
    if (clue1[0] == 'i' && clue2[0] == 'i' && clue3[2] == 'm')
    printf("pulga\n");
    
    if (clue1[0] == 'i' && clue2[0] == 'i' && clue3[2] == 'r')
    printf("lagarta\n");
    
    if (clue1[0] == 'i' && clue2[0] == 'a' && clue3[0] == 'h')
    printf("sanguessuga\n");
    
    if (clue1[0] == 'i' && clue2[0] == 'a' && clue3[0] == 'o')
    printf("minhoca\n");



    return 0;
}
