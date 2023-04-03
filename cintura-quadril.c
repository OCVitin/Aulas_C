#include <stdio.h>
int main(void) {
  float qua, cin, result;
  printf("> Ei yo, estamos aqui em mais um código. Agora eu vou calcular a relação entre sua cintura e seu quadril. E por incrível que pareça, eu vou precisar dos seus... Tã-dã!\n");
  printf(" \n");
  printf("| Quadril (centímetros): "); scanf("%f", &qua);
  printf("| Cintura (centímetros): "); scanf("%f", &cin);
  printf(" \n");
  result = (qua / cin) * 100;
  printf("> Então, filhote, você tem %.2f por cento de quadril-cintura.\n", result);
  return 0;
}
