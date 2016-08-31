#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    int c;

    scanf("%f %d",&n,&c);

    n = arredondar(n,c) / pow(10,c);

    printf("%f",n);

    return 0;
}

arredondar(double a,int b)
{
    a = a * pow(10,b);

    if (a - floor(a) >= 0.5){
        a += 1;
    }

    return floor(a);
}

/*Escreva uma fun��o de prot�tipo  double�arredondar(double�n,�int�c); que arredonda
o valor de n para um n�mero com precis�o de c casas decimais. Por exemplo,
arredondar(5.78351,1) devolve  5.8 ,  arredondar(5.78351,2)  devolve  5.78 ,
arredondar(5.78351,3)  devolve  5.784 . Dica: utilize a fun��o  arredondarParaInt
passando seu argumento multiplicado por 10 c , e depois divida o valor de retorno da fun��o por
10 c .*/
