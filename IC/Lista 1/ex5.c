#include <stdio.h>

void triangulo(int n,char ch)
{
  int i,j,k = 0,a,b = n;
  for(i = 1 ; i <= n ; i++){
        if (j > b){
            for (a = 1 ; a <= k ; a++) printf(" ");
        }
    for (j = 0 ; j < b ; j++){
        printf("%c",ch);
    }
    k++;
    printf("\n");
    b -= 2;
    n--;
  }
}

int main()
{
    triangulo(7,'#');
    return 0;
}
