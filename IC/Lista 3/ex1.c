#include <stdio.h>


int div(int,int);

int main()
{
    int x,y;

    scanf("%d %d",&x,&y);

    printf("Quociente: %d\n",div(x,y));

    return 0;
}

int div(a,b)
{
    int quociente = 0;

    if (b > a)
    {
         return 0;
    }
    else{
        if (a >= b)
        {
            quociente = 1 + div(a-b,b);
            return quociente;
        }
    }
}
