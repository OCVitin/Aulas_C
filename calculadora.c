#include <stdio.h>
int main(void) {
  // Entrada dos dados
  int N1, N2;
  printf("Digita aí o valor do primeiro número: ");
  scanf("%i", &N1);
  printf("Digita aí o valor do segundo número: ");
  scanf("%i", &N2);
  printf(" \n");
  printf("> Partiu calcular?\n");
  printf(" \n");
  // Tá na hora de mostrar os meus métodos
  printf("|          Soma: Número1 + Número2 = %i + %i = %i\n", N1, N2, N1 + N2);
  printf("|     Subtração: Número1 - Número2 = %i - %i = %i\n", N1, N2, N1 - N2);
  printf("| Multiplicação: Número1 x Número2 = %i x %i = %i\n", N1, N2, N1 * N2);
  printf("|       Divisão: Número1 / Número2 = %i / %i = %i, sobra: %i\n", N1, N2, N1 / N2, N1 % N2); // DIV (quociente) e MOD (resto) inclusos
  return 0;
}
