#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"
#include "entrada.h"
#include "controle.h"
#include "validacao.h"


int main() {

  int usuario,r=0;

  do{

    system("cls");
    cabecalho();
    usuario = entrada();
    controle(usuario);
    r=validacao();

  }while(r==1);

  return 0;
}
