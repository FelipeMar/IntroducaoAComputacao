#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}


int main()
{
    int a;
    printf("Informe um numero natural: ");
    scanf("%d",&a);
    printf("O Fatorial de %d e : %d",a,fatorial(a));
    return 0;
}
