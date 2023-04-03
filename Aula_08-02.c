#include <stdio.h>
int main(void) {
  int idade;
  float temp;
  printf("Ei yo, bro! Bem-vindo, quer dar uma olhada no meu código? Se liga aí, então.\n");
  printf("Digita aí tua idade, mas em anos, valeu?\n");
  scanf("%i", &idade);
  printf("Pô cara, que calor. Eu boto o ar condicionado em quantos graus celsius?\n");
  scanf("%f", &temp);
  printf("Então cê tem %i anos, huh?\n", idade);
  printf("Beleza, vô botar o ar em %.1f°C.\n", temp);
  return 0;
}
