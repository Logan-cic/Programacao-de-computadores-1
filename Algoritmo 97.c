//-------------------------------------------------

//--------------  Algoritmo 97  --------------------

//-------------------------------------------------

#include <stdio.h>

int main(void) {

    int num;

    printf("digite numero: ");
    scanf("%d", &num);

  if(num % 10 == 0){
    printf("\nmultiplo de 10");
  }    
  else
    if(num % 2 == 0){
      printf("\nmultiplo de 2");
    }
  else
      if(num % 5 == 0){
        printf("multiplo de 5");
      }
  else{
    printf("Nao e multiplo");
  }

  
  return 0;
}