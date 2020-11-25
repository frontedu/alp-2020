// EDUARDO FERNANDES SILVA
// 147.611.916.35
// 26/11/2020
// 1º PERIODO ALP (ADS)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


  void fim (int *opc){
    printf("\n\nDESEJA VOLTAR AO MENU?\n[1] SIM [8] FINALIZAR ..: ");
    do{
    fflush(stdin);
    scanf("%d", &*opc);

    }while(*opc != 1 || *opc != 8);
}

void entrada (int *x)
{
    do
    {
        fflush (stdin);
        scanf ("%d", &*x);
        if (*x < 0)
            printf ("\n numero invalido ... digite outro numero maior ou igual a zero ..: ");

    }
    while (*x < 0);
}

//===============================================

void menu (int *opc)
{
    printf ("\n\n");
    printf ("        PROVA NOVEMBRO - FRACOES\n");
    printf ("        =========================\n");
    printf ("\n\t[1] OPCAO 1");
    printf ("\n\t[2] OPCAO 2");
    printf ("\n\t[3] OPCAO 3");
    printf ("\n\t[4] FINALIZAR");
    printf ("\n\nDigite uma das opcoes acima ...: ");
    do
    {
        fflush (stdin);
        scanf ("%d", &*opc);
        if (*opc < 1 || *opc > 8)
            printf ("\n opcao invalida ... digite entre 1 e 8 ...: ");

    }
    while (*opc < 1 || *opc > 8);
}



/*
MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN 
MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN 
*/



int main()
{
    //CRIAR VARS
    int opc;
    int dia, mes, ano;
    int i, j, res;
    int n1, n2, n3;
    char mes_ext[40];

    //INICIALIZAR VARS
    opc = 0;

    //LAÇO PRINCIPAL PARA MONTAR O MENU PRINCIPAL
    do
    {
        system ("cls");
        menu (&opc);
        if (opc == 8)
            printf ("\n\nPROGRAMA FINALZIADO COM SUCESSO");
        else
        {
            system ("cls");
            if (opc == 1)
            {


            }
            else
            {
                if (opc == 2)
                {


                }
                else
                {
                    if (opc == 3)
                    {


                    }


                }
            }
        fim(&opc);

        }
    }
    while (opc != 8);
    printf("\n\n\n Acabou ... \n\n\n\n");
    return 0;
}
