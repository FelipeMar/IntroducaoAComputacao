#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("Permutacao: %d\n",fatorial(n));
    printf("Arranjos: %d\n",fatorial(n)/fatorial(n-k));
    printf("Combinacoes: %d\n",fatorial(n)/(fatorial(k)*fatorial(n-k)));
  return 0;
}
