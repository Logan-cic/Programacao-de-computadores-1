#include <stdio.h>

void linha(){
  int i;

  for(i=1; i<=30;i++)
    putchar('*');
      putchar('\n');
}

void titulo(){ 
  printf("\t\t*CALCULADORA*\n"); 
}

void menu(){
  printf("\n\t\t + para somar");
  printf("\n\t\t - para subtrair");
  printf("\n\t\t * para multiplicar");
  printf("\n\t\t / para dividir\n");
}

int main(void) {

  int num1, num2;
  char op;
  
    linha();
    titulo();
    linha();  
  
   menu();
  
printf("\nEscolha uma operação: ");
  scanf("\n%c", &op);

  if (op == '+'){
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("\n\t\t %d + %d = %d", num1, num2, num1+num2);
  }
  else
    if (op == '-'){
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("\n\t\t%d - %d = %d", num1, num2, num1-num2);
    }
    else
      if(op == '*'){
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("\n\t\t%d * %d = %d", num1, num2, num1*num2);
      }
      else
        if(op == '/'){
          printf("Digite o primeiro numero: ");
          scanf("%d", &num1);
          printf("Digite o segundo numero: ");
          scanf("%d", &num2);
          printf("\n\t\t%d / %d = %d", num1, num2, num1/num2);
        }
        else
          printf("\n\t\tOPÇÃO NÃO DISPONIVEL!!");
          
  return 0;
}