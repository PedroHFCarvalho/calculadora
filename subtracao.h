#include <stdio.h>

int subtracao(){

  int num, num2, resultado;
  printf("Digite o Primeiro numero ");
  scanf("%d", &num);
  printf("Digite o Segundo numero ");
  scanf("%d", &num2);

  resultado=num-num2;

  printf("\nO Resultado e: %d",resultado);

  return resultado;
}
