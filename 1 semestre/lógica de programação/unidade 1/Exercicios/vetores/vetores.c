#include <stdio.h>

int main() {
  int vetor[5] = {10,20,30,40,50};
  int indice;

  for (int i = 0; i < 5; i++){
    printf("Indice %d: %d \n", i, vetor[i]);
  }

  printf("Escolha um indice: ");
  scanf("%d", &indice);
  
  if (indice < 6 || indice >= 5) {
    printf("O valor é incorreto");
  } else {
    printf("O valor é: %d \n", indice);
  }
  
  return 0;
}
