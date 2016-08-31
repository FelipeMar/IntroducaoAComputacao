/*Escreva um programa que use uma macro MINIMUM2
para determinar o menor entre dois valores numéricos.
Dica: utilize o operador condicional ternário.*/

#include <stdio.h>
#define MINIMUM2(x,y) x < y ? x : y

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    printf("Menor: %d\n",MINIMUM2(a,b));

    return 0;
}

