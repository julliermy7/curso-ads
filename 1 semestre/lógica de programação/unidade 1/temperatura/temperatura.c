#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char unidade;
	float temperatura;
	
	printf("\n Sua temperatura está em (F) ou (C)? : ");
	scanf("%c", &unidade);
	unidade = toupper(unidade); // Função que converte a letra minuscula para maiúscula
	
	if (unidade == 'C') {
		printf("Digite a temperatura em Celsius (C) : ");
		scanf("%f", &temperatura);
		temperatura = (temperatura * 1.8) + 32;
		printf("A temperatura em Fahreinheit é : %.1f", temperatura);
	} else if (unidade == 'F') {
		printf("Digite a temperatura em Fahrenheit (F) : ");
		scanf("%f", &temperatura);
		temperatura = (temperatura - 32) / 1.8;
		printf("A temperatura em Celsius é : %.1f", temperatura);
	} else {
		printf("\n %c não é uma unidade valida de medida.", unidade);
	}

	system("pause");
	return 0;
}