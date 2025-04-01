#include <stdio.h>
#include <stdlib.h>

double quadrado(double x)
{
	double resultado = x * x;
	return resultado;
}

int main()
{
	double x = quadrado(3.14);
	printf("%lf", x);

	system("pause");
	return 0;
}