#include <stdio.h>

int main()
{
	float ganho_por_hora,
		  horas_trabalhadas,
		  salario_bruto,
		  ir,
		  inss,
		  sindicato,
		  salario_liquido;

	printf("Quanto voce ganha por hora? \n");
	scanf(" %f", &ganho_por_hora);
	printf("Quantas horas voce trabalhou? \n");
	scanf(" %f", &horas_trabalhadas);

	salario_bruto = ganho_por_hora * horas_trabalhadas;
	ir = salario_bruto * (11.0 / 100);
	inss = salario_bruto * (8.0 / 100);
	sindicato = salario_bruto * (5.0 / 100);
	salario_liquido = salario_bruto - ir - inss - sindicato;

	printf("Salario bruto: %.2f \n", salario_bruto);
	printf("IR: %.2f \n", ir);
	printf("INSS: %.2f \n", inss);
	printf("Sindicato: %.2f \n", sindicato);
	printf("Salario liquido: %.2f \n", salario_liquido);

	return 0;
}