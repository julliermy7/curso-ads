#include <stdio.h>
#include <stdlib.h>

double valor, dc, cm, mm;

int multiplica(int x, int y)
{
	int resultado;
	resultado = x * y;
	printf("O resultado é %d", resultado);
	return(resultado);
}

int main()
{
	printf("Digite um valor em metros : ");
	scanf("%lf", &valor);

	dc = valor * 10;
	cm = valor * 100;
	mm = valor * 1000;

	printf("Decimetros : %.2lf\n", dc);
	printf("Centimetros : %.2lf\n", cm);
	printf("Milimetros : %.2lf\n", mm);
	multiplica(5, 5);

	return 0;
}