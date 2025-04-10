#include <stdio.h>
#include <stdlib.h>

double somar(double a, double b) // Função de adição
{
	return a + b;
}

void exibirResultado(double resultado) // Função que retorna o resultado
{
	printf("Resultado : %.2lf", resultado);
}

int main()
{
	double num1, num2, resultado;

	printf("Digite o primeiro numero :");
	scanf("%lf", &num1);
	printf("Digite o segundo numero :");
	scanf("%lf", &num2);

	resultado = somar(num1, num2);
	exibirResultado(resultado);

	return 0;
}