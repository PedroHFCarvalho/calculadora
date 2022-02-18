#include <stdio.h>
#include "adicao.h"
#include "subtracao.h"
#include "multplicacao.h"
#include "divicao.h"

int controle(int usuario){
    float resultado;

 switch (usuario)
{
  case 1:
    adicao();
  break;

  case 2:
    subtracao();
   break;

  case 3:
    multplicacao();
   break;
  case 4:
    resultado=divicao();
   break;
  case 0:
    exit(0);
   break;

   default:
     printf("Invalido");
}

}
