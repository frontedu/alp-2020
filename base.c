// EDUARDO FERNANDES SILVA
// 147.611.916.35
// 26/11/2020
// 1º PERIODO ALP (ADS)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//MENU
void menu (int *opc)
{
    printf ("\n\n");
    printf ("      PROVA DE NOVEMBRO\n");
    printf ("      =================\n");
    printf ("\n\t[1] OPC 1");
    printf ("\n\t[2] OPC 2");
    printf ("\n\t[3] OPC 3");
    printf ("\n\t[4] FINALIZAR");
    printf ("\n\n\tESCOLHA A OPCAO ..: ");
    do
    {
        fflush (stdin);
        scanf ("%d", &*opc);
        
        if(*opc < 1 || *opc > 4)        
        printf ("\nOPCAO INVALIDA, DIGITE NOVAMENTE ..: ");
    }
    while (*opc < 1 || *opc > 4);
}

//VOLTAR AO MENU
void fim (int *opc){
  printf("\n\nDESEJA VOLTAR AO MENU?\n[1] SIM [2] NAO ..: ");

  do{
    scanf("%d", &*opc);
    if(*opc < 1 || *opc > 2)
    printf ("\nOPCAO INVALIDA, DIGITE NOVAMENTE ..: ");
  }while(*opc < 1 || *opc > 2);

  if(*opc == 2)
  *opc = 4;
}


int main()
{
    //CRIAR VARS
    int opc = 0;


    //INICIALIZAR VARS
    opc = 0;

    //LAÇO PRINCIPAL PARA MONTAR O MENU PRINCIPAL
    do
    {
        system ("cls");
        menu (&opc);

        system ("cls");
        if (opc == 1){

      printf("\nOPCAO 1\n");

        }
        else{
        if (opc == 2){

      printf("\nOPCAO 2\n");

        }
        else{
        if (opc == 3){

      printf("\nOPCAO 3\n");

        }
      }
    }

    if(opc != 4)
    fim(&opc);

    }while (opc != 4);
    printf("\n\nPROGRAMA FINALIZADO COM SUCESSO\n\n");
    return 0;
}