#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altura, peso, imc; // Variáveis
	printf("Insira sua altura : \n");
	scanf("%f", &altura);
	printf("Insira seu peso : \n");
	scanf("%f", &peso);
	imc = peso / (altura * altura);
	printf("Seu imc é : %.2f\n", imc);

	if (imc > 20) {
		printf("sigma \n");
	} else {
		printf("bruh \n");
	}
	system("pause");
	return 0;

}