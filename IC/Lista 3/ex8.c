/*Escreva um programa que use uma macro AREA_TRIRET para calcular a �rea de um
tri�ngulo ret�ngulo dados sua base e altura. �rea do tri�ngulo ret�ngulo = (base * altura) /2.*/
#include <stdio.h>
#define AREA_TRIRET(x,y) (x * y) / 2

int main()
{
    float base,altura;

    scanf("%f %f",&base,&altura);

    printf("AREA: %f\n",AREA_TRIRET(base,altura));

    return 0;
}
