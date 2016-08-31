#include <stdio.h>

int maior(int a,int b,int c)
{
   if (a >= b && a >= c)
    return  a;
   else {
    if (b >= c) return  b;
    else return  c;
   }
}

int main()
{
    int x,y,z,n;
    printf("Informe tres numeros: ");
    scanf ("%d %d %d",&x,&y,&z);
    printf("%d",maior(x,y,z));
    return 0;
}
