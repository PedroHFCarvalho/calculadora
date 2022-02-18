#include <stdio.h>
#include <stdlib.h>

int validacao(){

    int r=0;
    printf("\n\nDeseja realizar outro calculo 1 para Sim e 0 para Nao [1/0]\n");
    scanf("%d", &r);

    if(r!=1 && r!=0){
      printf("Resposta invalida\n");
      printf("\nO programa sera Finalizado");
      exit(0);
    }

return r;

}