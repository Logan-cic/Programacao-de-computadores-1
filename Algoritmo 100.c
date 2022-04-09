
//-------------------------------------------------

//--------------  Algoritmo 100  --------------------

//-------------------------------------------------
#include <stdio.h>

int main(void) {

  int num, c;

  printf("\nnumero de 4 algarismos: ");
  scanf("%d", &num);

  c = num / 100;

  if (c%4==0){
    printf("numero multiplo de 4: %d", c);
  }
  else
    printf("O numero nao e multiplo de 4");
    
  return 0;
}