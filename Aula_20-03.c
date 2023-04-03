#include <stdio.h>
#define TAMANHO 5

int main(void) {
  float bimestre1[TAMANHO], soma = 0;
  int acima = 0, indice = 0;
  printf("> No código de hoje: 'fazer um vetor pra armazenar nota de aluno de 0 a 10', yay!\n");
  printf("> Yay... Sem enrolar, bora.\n");
  printf("V Nota: se for digitar número quebrado, digite com '.' e não ','.\n");
  printf("| Ex.: 5,6 X\n");
  printf("|      5.6 V\n");
  printf("\n");
  while (indice < TAMANHO){
    printf("| Aluno %i, vamo: ", indice + 1);
    scanf("%f", &bimestre1[indice]);
    if (bimestre1[indice] < 0 || bimestre1[indice] > 10){
      printf("| QUAL FOI, DOIDO?! VAI QUEBRAR O CÓDIGO ASSIM!\n");
    }
    else
      indice++;
  }
  printf("\n");
  for(indice = 0; indice < TAMANHO; indice++)
    soma = soma + bimestre1[indice];
  printf("> Tô sem tempo, toma a média da turma: %.1f.\n", soma / TAMANHO);

  for(indice = 0; indice < TAMANHO; indice++){
    if(bimestre1[indice] >= 7.0)
      acima++;
  }
  return 0;
}
