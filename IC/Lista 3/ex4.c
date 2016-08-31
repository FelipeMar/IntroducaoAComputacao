/*Explique por quê ocorre um erro ao compilarmos um programa que contenha a função
abaixo.*/
void vai_da_pau(int x) {
   static int y = x; // x não é constante.
   printf("%d\n", y++);
}
