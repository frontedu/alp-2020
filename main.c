// EDUARDO FERNANDES SILVA
// 147.611.916-35
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
    printf ("          PROVA DE NOVEMBRO\n");
    printf ("          =================\n");
    printf ("\n\t[1] SEQUENCIA DE FIBONACCI");
    printf ("\n\t[2] FATORACAO MATEMATICA");
    printf ("\n\t[3] SAQUE NO CAIXA ELETRONICO");
    printf ("\n\n\t[4] FINALIZAR");
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
  printf("\n\nDESEJA VOLTAR AO MENU?\n[1] SIM [2] FINALIZAR ..: ");

  do{
    scanf("%d", &*opc);
    if(*opc < 1 || *opc > 2)
    printf ("\nOPCAO INVALIDA, DIGITE NOVAMENTE ..: ");
  }while(*opc < 1 || *opc > 2);

  if(*opc == 2)
  *opc = 4;
}

//VALIDAR N TERMOS (SER ENTRE 1 E 100 TERMOS)
void validarn (int *n){

    do{
    fflush(stdin);
    scanf("%d", &*n); 
    if(*n < 0 || *n > 100)
    printf("QUANTIDADE DE TERMOS INVÁLIDA, DIGITE NOVAMENTE ..: ");
    }while(*n < 0 || *n > 100);

}

//VALIDAR N REAIS (SER ENTRE 1 E 600 REAIS)
void validardin (int *n){

    do{
    fflush(stdin);
    scanf("%d", &*n); 
    if( *n > 600)
    printf("QUANTIDADE INDISPONIVEL, DIGITE NOVAMENTE ..: ");
    if(*n < 1)
    printf("QUANTIDADE INVALIDA, DIGITE NOVAMENTE ..: ");
    }while(*n < 1 || *n > 600);

}

//VALIDAR N VALOR (ENTRE 1 E MAXIMO INTEIRO)
void validarfat (int *n){

    do{
    fflush(stdin);
    scanf("%d", &*n); 
    if( *n < 2)
    printf("QUANTIDADE INVALIDA, DIGITE NOVAMENTE ..: ");
    }while(*n < 2);

}

//EXECUTAR FIBONACCI
void sequencia (int *n){
  int cont = 0, aux = 1, ant = 0, cont2 = 1;
  unsigned int res = 0;

printf("\n");
*n = *n - 1;
do{
while(cont < *n){
  ant = res;
  res += aux;
  aux = ant;
  cont++;
}

if(cont2 <= 5)
printf("%u, ", res);
else{
printf("\n%u, ", res);
cont2 = 1;
}

cont2++;
*n = *n - 1;
cont = 0;
res = 0;
ant = 0;
aux = 1;

}while(*n > 0);
if(cont2 <= 5)
printf("0.\n");
else
printf("\n0.\n");
}

//FATORACAO
  void fatorar(int *n){

int cont = 2;
  printf("\n");
  do{
  if(*n % cont == 0){
  printf("%d\t\t%d\n", *n, cont);
  *n = *n / cont;
} else
cont++;

  }while(*n > 1);
  printf("%d", *n);
  }


//CAIXA ELETRONICO (EXTENSO)
void extenso(int *valor){
  printf("\n\nPELO SAQUE DE R$ %d (", *valor);

int vfixo = 0;
vfixo = *valor;

      //RECEBER CENTENAS
  if(*valor >= 100){

    if(*valor >= 600){
      printf("SEISCENTOS ");
      *valor -= 600;
    }
    if(*valor >= 500){
      printf("QUINHENTOS ");
      *valor -= 500;
    }
    if(*valor >= 400){
      printf("QUATROCENTOS ");
      *valor -= 400;
    }
    if(*valor >= 300){
      printf("TREZENTOS ");
      *valor -= 300;
    }
    if(*valor >= 200){
      printf("DUZENTOS ");
      *valor -= 200;
    }
    if(*valor >= 100){
      if(*valor > 100)
      printf("CENTO ");
      else
      printf("CEM ");

      *valor -= 100;
    }
  }


      //RECEBER DEZENAS
  if(*valor >= 10){

    if(*valor >= 90){
      printf("NOVENTA ");
      *valor -= 90;
    }
    if(*valor >= 80){
      printf("OITENTA ");
      *valor -= 80;
    }
    if(*valor >= 70){
      printf("SETENTA ");
      *valor -= 70;
    }
    if(*valor >= 60){
      printf("SESSENTA ");
      *valor -= 60;
    }
    if(*valor >= 50){
      printf("CINQUENTA ");
      *valor -= 50;
    }
    if(*valor >= 40){
      printf("QUARENTA ");
      *valor -= 40;
    }
    if(*valor >= 30){
      printf("TRINTA ");
      *valor -= 30;
    }
    if(*valor >= 20){
      printf("VINTE ");
      *valor -= 20;
    }
    if(*valor >= 10){
      printf("DEZ ");
      *valor -= 10;
    }
  }

     //RECEBER UNIDADES
  if(*valor >= 1){

    if(*valor >= 9){
      printf("NOVE");
      *valor -= 9;
    }
    if(*valor >= 8){
      printf("OITO");
      *valor -= 8;    
    }
    if(*valor >= 7){
      printf("SETE");
      *valor -= 7;
    }
    if(*valor >= 6){
      printf("SEIS");
      *valor -= 6;
    }
    if(*valor >= 5){
      printf("CINCO");
      *valor -= 5;
    }
    if(*valor >= 4){
      printf("QUATRO");
      *valor -= 4;
    }
    if(*valor >= 3){
      printf("TRÊS");
      *valor -= 3;
    }
    if(*valor >= 2){
      printf("DOIS");
      *valor -= 2;
    }
    if(*valor >= 1){
      printf("UM");
      *valor -= 1;
    }
  }
    if(vfixo > 1)
    printf(" REAIS)");
    else
    printf(" REAL)");

    *valor = vfixo;
}


//CAIXA ELETRONICO (NOTAS)
void notas(int *valor){

int nota100 = 0, nota50 = 0, nota10 = 0, nota5 = 0, nota1 = 0;

      //NOTAS DE CEM
  if(*valor >= 100){

    if(*valor >= 600){
      nota100 = 6;
      *valor -= 600;
    }
    if(*valor >= 500){
      nota100 = 5;
      *valor -= 500;
    }
    if(*valor >= 400){
      nota100 = 4;
      *valor -= 400;
    }
    if(*valor >= 300){
      nota100 = 3;
      *valor -= 300;
    }
    if(*valor >= 200){
      nota100 = 2;
      *valor -= 200;
    }
    if(*valor >= 100){
      nota100 = 1;
      *valor -= 100;
    }
  }


     //NOTAS DE 50 E 10
  if(*valor >= 10){

    if(*valor >= 90){
      nota50 = 1;
      nota10 = 4;
      *valor -= 90;
    }
    if(*valor >= 80){
      nota50 = 1;
      nota10 = 3;
      *valor -= 80;
    }
    if(*valor >= 70){
      nota50 = 1;
      nota10 = 2;
      *valor -= 70;
    }
    if(*valor >= 60){
      nota50 = 1;
      nota10 = 1;
      *valor -= 60;
    }
    if(*valor >= 50){
      nota50 = 1;
      *valor -= 50;
    }
    if(*valor >= 40){
      nota10 = 4;
      *valor -= 40;
    }
    if(*valor >= 30){
      nota10 = 3;
      *valor -= 30;
    }
    if(*valor >= 20){
      nota10 = 2;
      *valor -= 20;
    }
    if(*valor >= 10){
      nota10 = 1;
      *valor -= 10;
    }
  }

      //NOTAS DE 5 E 1
  if(*valor >= 1){

    if(*valor >= 9){
      nota5 = 1;
      nota1 = 4;
      *valor -= 9;
    }
    if(*valor >= 8){
      nota5 = 1;
      nota1 = 3;
      *valor -= 8;      
    }
    if(*valor >= 7){
      nota5 = 1;
      nota1 = 2;
      *valor -= 7;
    }
    if(*valor >= 6){
      nota5 = 1;
      nota1 = 1;
      *valor -= 6;
    }
    if(*valor >= 5){
      nota5 = 1;
      *valor -= 5;
    }
    if(*valor >= 4){
      nota1 = 4;
      *valor -= 4;
    }
    if(*valor >= 3){
      nota1 = 3;
      *valor -= 3;
    }
    if(*valor >= 2){
      nota1 = 2;
      *valor -= 2;
    }
    if(*valor >= 1){
      nota1 = 1;
      *valor -= 1;
    }
  }

      //NOTAS RECEBIDAS
    printf("\n\nVOCE IRA RECEBER:\n");
    if(nota100 > 0)
    printf("%d NOTA(AS) DE R$ 100\n", nota100);
    if(nota50 > 0)
    printf("%d NOTA(AS) DE R$ 50\n", nota50);
    if(nota10 > 0)
    printf("%d NOTA(AS) DE R$ 10\n", nota10);
    if(nota5 > 0)
    printf("%d NOTA(AS) DE R$ 5\n", nota5);
    if(nota1 > 0)
    printf("%d NOTA(AS) DE R$ 1\n", nota1);

}

int main()
{
    //CRIAR VARS
    int opc, n;


    //INICIALIZAR VARS
    opc = n = 0;

    //LAÇO PRINCIPAL PARA MONTAR O MENU PRINCIPAL
    do
    {
        system ("cls");
        menu (&opc);

        system ("cls");
        if (opc == 1){

    //OPC1

    printf("\n\n    SEQUENCIA FIBONACCI INVERTIDA\n"); 
    printf("    =============================\n\n"); 

    printf("DIGITE O NUMERO DE TERMOS ..: ");
    validarn(&n);
    sequencia(&n);

        }
        else{
        if (opc == 2){

    //OPC2

    printf("\n\n    FATORACAO MATEMATICA\n"); 
    printf("    ====================\n\n"); 
    
    printf("DIGITE O VALOR PARA FATORACAO (MAIOR QUE 2) ..: ");
    validarfat(&n);
    printf("\n\nNUM\t\t FATOR\n"); 
    printf("----------------------------"); 
    fatorar(&n);

        }
        else{
        if (opc == 3){

    //OPC3

    int copia = 0;

    printf("\n\n    SAQUE NO CAIXA ELETRONICO\n"); 
    printf("    =========================\n\n"); 

    printf("DIGITE O VALOR PARA SAQUE (ATE 600 REAIS) ..: ");
    validardin(&n);
    copia = n;
    extenso(&n);
    notas(&copia);

        }
      }
    }

    if(opc != 4)
    fim(&opc);

    }while (opc != 4);
    printf("\n\nPROGRAMA FINALIZADO COM SUCESSO\n\n");
    return 0;
}