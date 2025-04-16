#include <stdio.h>

int main()
{
	int num1 = 2;
	int num2 = 6;
	float num3 = 7.0;

	float produto1 = (num1 * 2) * (num2 / 2.0);
	float soma = (num1 * 3) + num3;
	float cubo = (num3 * num3 * num3);

	printf("Primeiro numero: %.2f \n", produto1);
	printf("Segundo numero: %.2f \n", soma);
	printf("Terceiro numero: %.2f \n", cubo);

	return 0;
}