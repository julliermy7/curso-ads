#include <stdio.h>

int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

char* ahh[5] = {"skibidi", "maça", "sigma", "samuel", "mine"}; // colocar * para aceitar varias strings

int main()
{
	// Acessando o número 5:
	printf("%d \n", matriz[2][2]);  // linha 1, coluna 1 → valor 5
	printf("%s \n", ahh[2]);

	for(int i = 0; i < 5; i++) {
		printf("%s \n", ahh[i]);
	}

	return 0;
}