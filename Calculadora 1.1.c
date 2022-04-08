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

  char op;
  int num1, num2, res=0;
  
linha();
titulo();
linha();

menu(); 

   printf("\nEscreva uma expressão: ");
   scanf("%d %c %d", &num1, &op, &num2);
    
  switch (op){
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '*': res = num1 * num2; break;
    case '/': res = num1 / num2; break;
    default: printf("\nINISIRA UMA OPERAÇÃO VALIDO!\n\nOPERAÇÃO INVALIDA\n");
                                                                                                                                                                                                                                           
  }

printf("\n%d %c %d = %d", num1, op, num2, res);
  
  return 0;
}