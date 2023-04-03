#include <stdio.h>

int main(void) {
  int quant = 0, cont;
  int d1, d2, d3, d4;  
  for(cont = 1000; cont < 10000; cont++){
    d1 = cont / 1000;
    d2 = cont % 1000 / 100;
    d3 = cont % 1000 % 100 / 10;
    d4 = cont % 1000 % 100 % 10;
    
    if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
      if(cont % 2 != 0 && cont % 39 == 0){
        quant++;
        printf("| %i° Senha: %i\n", quant, cont);
      }
      //quant++;
      //printf("| Senha %i: %i\n", quant, cont);
    }
  }
}
