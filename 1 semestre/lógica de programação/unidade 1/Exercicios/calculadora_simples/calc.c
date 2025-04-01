#include <stdio.h>
#include <stdlib.h>

double num1, num2;
char operacao;
double resultado;

int main()
{
	printf("Escolha o operador: \n + Adição \n - Subtração \n");
	scanf("%c", &operacao);
	printf("Digite o primeiro número: ");
	scanf("%lf", &num1);
	printf("Digite o segundo número: ");
	scanf("%lf", &num2);

	switch(operacao)
	{
		case '+':
			resultado = num1 + num2;
			printf("%.2f", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("%.2f", resultado);
			break;
	}

	return 0;
}