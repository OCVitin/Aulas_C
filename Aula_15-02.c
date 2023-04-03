#include <stdio.h>
int main(void) {
  // Entrada de dados dos manos:
  float Comprimento;
  printf("Ei, bro. Não sei bem pra que eu tô fazendo esse código, mas me dá um help aí.\n");
  printf(" \n");
  printf("> Digita pra mim um comprimento, pode ser de qualquer coisa (mas em centímetros, não esquece de ver se o Num Lock tá ativado): ");
  scanf("%f", &Comprimento);
  printf(" \n");
  printf("Processando...\n");
  printf(" \n");

  // Processamento show de bola:
  Comprimento /= 2.54; // cm -> polegadas
  printf("> Surpresa! Isso aqui é um conversor de unidade, tome seu comprimento em polegada: %.2f\n", Comprimento);
  Comprimento *= 0.08; // polegadas -> pés
  printf("> Agora tome seu comprimento em pés: %.2f\n", Comprimento);
  printf("\n");

  // Outra atividade
  float larg, alt, prof, precoAlc, precoGas, volumelit, propGas, propAlc;
  printf("> Tá bom, isso foi bom pra aquecer, agora vamo fazer um cálculo do tanque de combustível do seu carro\n");

  // Entrada de dados do tanque:
  printf("| Me fala em ordem: Largura, altura e profundidade do tanque (em "
         "metros).\n");
  printf("| "); scanf("%f", &larg);
  printf("| "); scanf("%f", &alt);
  printf("| "); scanf("%f", &prof);

  // Entrada de dados do combustível:
  printf("| Porra, gasolina tá cara demais, né? Quanto tava hoje, quando a gente passou no posto?\n");
  printf("| "); scanf("%f", &precoGas);
  printf("| Acho que encher com álcool fica mais barato, quanto tava?\n");
  printf("| "); scanf("%f", &precoAlc);

  // Processamento fora de tela
  volumelit = larg * alt * prof * 1000;

  // Saída dos preços
  printf("| Se tu encher tudo de gasolina, vai ficar uns R$%.2f.\n", volumelit * precoGas);
  printf("| Se tu encher tudo de álcool, vai ficar uns R$%.2f.\n", volumelit * precoAlc);
  printf("| Se tu encher 80%% de gasolina e 20%% de álcool, vai ficar uns R$%.2f.\n", ((volumelit * precoGas * 80) / 100) + ((volumelit * precoAlc * 20) / 100));
  printf("| Mas diz aí, respectivamente, a porcentagem de gasolina e de álcool que tu quer: \n");
  printf("| "); scanf("%f", &propGas);
  printf("| "); scanf("%f", &propAlc);
  printf("| Se tu encher %.0f%% de gasolina e %.0f%% de álcool, vai ficar uns R$%.2f.\n", propGas, propAlc, ((volumelit * precoGas * propGas) / 100) + ((volumelit * precoAlc * propAlc) / 100));
  return 0;
}
