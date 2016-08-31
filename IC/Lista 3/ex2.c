#include <stdio.h>
#include <stdlib.h>


int divi(int,int);

int main(int argc,char * argv[])
{
    if (argc >= 4 || argc < 3) printf("ERRO numero invalido de valores!!!(Insira 2 valores)");
    else
    {
        int i = atoi(argv[1]),k = atoi(argv[2]);
        printf("Quociente: %d\n",divi(i,k));
    }

    return 0;
}

int divi(a,b)
{
    int quociente = 0;
    if (b > a)
    {
         return 0;
    }
    else{
        if (a >= b)
        {
            quociente = 1 + divi(a-b,b);
            return quociente;
        }

    }
}
