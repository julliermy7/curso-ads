#include <stdio.h>

int main()
{
  int i, j, rows;

  printf("Digite o número de linhas da pirâmide: ");
  scanf("%d", &rows);
  
  for(i = 1; i <= rows; i++) {
    // Imprime os espaços
    for (j = 1; j <= rows - i; j++) {
      printf(" ");
    }
    
    // Imprime os asteriscos
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
