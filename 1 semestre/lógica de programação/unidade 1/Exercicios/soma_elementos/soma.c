#include <stdio.h>

int main()
{
  int vetor[10];
  int soma = 0;

  // Leitura dos 10 números
  for (int i = 0; i < 10; i++) {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &vetor[i]);
    soma += vetor[i]; // Acumula a soma
  }

  printf("\nA soma dos elementos do vetor é %d\n", soma);

  return 0;
}
