#include <stdio.h>
#define tam 5
/* Elabore um algoritmo que receba dois vetores numéricos chamados A e B com tamanho de 20 posições do tipo real. Construir um vetor de mesmo tipo e tamanho o qual será formado pela soma
de primeiro elemento de A com o primeiro de B e armazenando na primeira posição de C, segundo
elemento de A com segundo elemento de B armazenando na segunda posição de C, e assim por
diante. */

int main(void) {
  int a[tam], b[tam], c[tam], i;



  printf("           SOMA DE VETORES A E B\n");
  printf("           =====================\n\n");

  for(i=0; i<tam; i++){
    printf("DIGITE O VALOR DE A[%d] ..: ", i);
    fflush(stdin);
    scanf("%d", &a[i]);

    printf("DIGITE O VALOR DE B[%d] ..: ", i);
    fflush(stdin);
    scanf("%d", &b[i]);

    c[i] = a[i] + b[i];
  }


  printf("\n           RESULTADOS\n");
  printf("           ==========\n\n");

  for(i=0; i<tam; i++){

    printf("A SOMA DE A[%d](%d) COM B[%d](%d) EH %d\n", i, a[i], i, b[i], c[i]);

  }




  

  return 0;
}