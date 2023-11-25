#include <stdio.h>
#include <stdlib.h>

int main() {
  //declarando vetor
 double vetorOriginal[10];
 double vetorInvertido[10];
  //lendo os vetor original
  printf("digite 10 numeros reais: \n");
  for(int i = 0; i <10; i++){
    printf("Elemento %d:", i +1);
    scanf("%.2lf",&vetorOriginal[i]);
  }
  //lendo vetor invertido
  for(int i = 0;i<10;i++){
    vetorInvertido[i]= vetorOriginal[9-i];
  }
  //imprimindo o vetor original
  printf("Vetor Original: ");
  for (int i = 0; i < 10; i++) {
      printf("%.2lf", vetorOriginal[i]);
      if (i < 9) {
          printf(", ");
      }
  }
  printf("\n");

  // Imprimindo o vetor invertido
  printf("Vetor Invertido: ");
  for (int i = 0; i < 10; i++) {
      printf("%.2lf", vetorInvertido[i]);
      if (i < 9) {
          printf(", ");
      }
  }
  printf("\n");

  return 0;
}