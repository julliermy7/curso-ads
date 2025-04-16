#include <stdio.h>

int main()
{
	char genero;
	float altura;
	float peso_ideal;

	printf("Qual seu genero? \n");
	scanf(" %c", &genero);
	printf("Qual sua altura? \n");
	scanf(" %f", &altura);

	switch(genero){
	case 'h':
		peso_ideal = (72.7 * altura) - 58;
		printf("Seu peso ideaĺ é: %.2f \n", peso_ideal);
		break;
	case 'm':
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é: %.2f \n", peso_ideal);
		break;
	default:
		printf("você é um et? \n");
		break;
	}

	return 0;
}