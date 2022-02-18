#include <stdio.h>


float divicao(){

  float num, num2, resultado;
  printf("Digite o Primeiro numero ");
  scanf("%f", &num);
  printf("Digite o Segundo numero ");
  scanf("%f", &num2);

  resultado=num/num2;

  printf("\nO Resultado e: %2.f",resultado);

  return resultado;
}
