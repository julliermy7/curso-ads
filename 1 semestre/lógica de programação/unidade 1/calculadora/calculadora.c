#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num1, num2;
	double resultado;
	char operacao;

	printf("Escolha a operação : \n + Adição \n - Subtração \n * Multiplicação \n / Divisão \n");
	scanf("%c", &operacao);
	printf("Digite o primeiro número. \n");
	scanf("%lf", &num1);
	printf("Digite o segundo número. \n");
	scanf("%lf", &num2);
	
	switch(operacao) {	
		case '+':
			resultado = num1 + num2;
			printf("O resultado é : %.2lf", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("O resultado é : %.2lf", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("O resultado é : %.2lf", resultado);
			break;
		case '/':
			resultado = num1 / num2;
			printf("O resultado é : %.2lf", resultado);
			break;
		default:
			printf("Isso não é uma operação válida.");
			break;
	}

	system("pause");
	return 0;
}