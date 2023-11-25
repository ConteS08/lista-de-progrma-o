#include <stdio.h>
#include <stdlib.h>
int main(){
  //declaracao dos vetores
int v1[15];
int i;
  //laco de repeticao
for (i= 0; i < 15; i++){
  printf("digite o %do numero:", i+1);
  scanf("%d", &v1[i]);
}
  //imprindo os numeros
printf("os numeros digitados foram:");
for (i= 0; i < 15;i++){
printf("%d", v1[i]);
}
printf("\n");

  return 0;
}