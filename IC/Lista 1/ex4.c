#include <stdio.h>

void retangulo(int a,int c)
{
    int i,j;
    for (i = 1; i <= a ; i++){
        printf("*");
      for (j = 1; j <= c ; j++) printf("*");
        printf("\n");
    }
}

int main()
{
    retangulo(5,10);
    return 0/
}
