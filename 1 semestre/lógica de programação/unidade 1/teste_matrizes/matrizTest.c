#include <stdio.h>

int main() {
    printf("Matriz: \n");
    
    int matriz[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
    int row;
    int column;

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Escolha uma linha: ");
    scanf("%d", &row);
    printf("Escolha uma coluna: ");
    scanf("%d", &column);
    
    // Armazena o valor escolhido
    int elementoEscolhido = matriz[row][column];
    
    printf("Elemento escolhido na posição: [%d][%d] : %d \n", row, column, elementoEscolhido);
    
    printf("O dobro desse elemento é: %d", elementoEscolhido * 2);
    
return 0;
}
