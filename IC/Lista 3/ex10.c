/*Escreva um programa que use uma macro MINIMUM3
para determinar o menor de três valores numéricos.
A macro MINIMUM3 deve usar a macro MINIMUM2 definida um
exercício anterior. */

#include <stdio.h>
#define MINIMUM2(x,y) (x < y ? x : y)
#define MINIMUM3(a,b) a < b ? a : b

int main()
{
    int i,j,k;

    scanf("%d %d %d",&i,&j,&k);

    printf("O Menor: %d\n",MINIMUM3(i,MINIMUM2(j,k)));

    return 0;
}
