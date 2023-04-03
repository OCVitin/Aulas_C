#include <stdio.h>
int main(void) {
  printf("Bora tomar uma?\n");
  printf("Digite 1 para 'Ele não vai não'\n");
  printf("Se não...\n");
  int opc;
  scanf("%d", &opc);
  if(opc == 1){
    printf("Bora, bora, bora tomar uma!\n");
  }else{
    printf("Hello World\n");}
  return 0;
}
