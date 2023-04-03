#include <stdio.h>
#include <math.h>

int main(void) {
  //Atividade 01:
  printf("-> Ei yo yo! Vamos fazer uma contagem de 0 até 100, dizendo se os números são pares ou ímpares. Vamo pro código!\n");
  printf(" \n");
  int cont;
  for(cont = 0; cont <= 10; cont++){
    if(cont % 2 == 0)
      printf("| Número par:   %i\n", cont);
    else
      printf("| Número ímpar: %i\n", cont);
  }
  printf(" \n");
  printf("-> Agora de trás para frente!\n");
  printf(" \n");
  for(cont = 10; cont >= 0; cont--){
    if(cont % 2 == 0)
      printf("| Número par:   %i\n", cont);
    else
      printf("| Número ímpar: %i\n", cont);
  }

  //Atividade 02:
  printf(" \n");
  printf("-> Bom, foi bom pra aquecer. Agora vamo fazer um aleatorizador de senha, de até 4 dígitos.\n");
  printf(" \n");
  int quant2 = 0, cont2;
  for(cont2 = 1000; cont2 < 10000; cont2++){
    if(cont2 % 2 != 0 && cont2 % 39 == 0){
      quant2++;
      printf("| Senha %i: %i\n", quant2, cont2);
    }
  }

  //Atividade 03:
  printf(" \n");
  printf("-> Beleza, só pra tirar onda, vô deixar você escolher um número, esse código vai contar todos os ímpares até o que você escolheu.\n");
  printf("-> Digita aí um número inteiro, maior ou igual a 1\n");
  printf(" \n");
  int quant3 = 0, cont3, x;
  float pot;
  scanf("%i", &x);
  if(x < 1)
    printf("QUAL FOI, DOIDO?! QUER QUEBRAR O CÓDIGO?!\n");
  else{
    pot = pow(x, 3);
    printf("Os ímpares entre [%i, %.0f] são:\n", x, pot);
    for(cont3 = x; cont3 <= pot; cont3++){
      if(cont3 % 2 != 0){
        quant3++;
        printf("%i° número ímpar: %i\n", quant3, cont3);
      }
    }
  }

  //Fim!
  return 0;
}
