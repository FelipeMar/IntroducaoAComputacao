/*Explique por qu� ocorre um erro ao compilarmos um programa que contenha a fun��o
abaixo.*/
void vai_da_pau(int x) {
   static int y = x; // x n�o � constante.
   printf("%d\n", y++);
}
