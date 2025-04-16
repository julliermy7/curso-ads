#include <stdio.h>

int main()
{
	float ganho_por_hora = 16.00;
	int horas_trabalhadas = 160;
	float salario = (horas_trabalhadas * ganho_por_hora);

	printf("Seu salario eh: %.2f", salario);
	return 0;
}