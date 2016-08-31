Qual a sa�da do programa abaixo?
#include <stdio.h>
int x;
void fun(void);
int main() {
   printf("main: x = %d\n", x++);
   fun();
   printf("main: x = %d\n", x++);
   fun();
   printf("main: x = %d\n", x++);
   return 0;
}
void fun() {
   static int y;
   printf("fun: x = %d, y = %d\n", x, y++);
   auto int x = y * 2;
   printf("fun: x = %d, y = %d\n", x, y++);
}

/* saida */

main: x = 0
fun: x = 0 , y = 0
fun: x = 0 , y = 1
main: x = 0
fun: x = 0 , y = 2
fun: x = 6 , y = 3
main: x = 0

