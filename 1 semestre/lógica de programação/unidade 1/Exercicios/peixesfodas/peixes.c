#include <stdio.h>

int main()
{
	float peso, excesso = 0, multa = 0;

	printf("qual peso dos peixes que tu trouxe ze? \n");
	scanf(" %f", &peso);

	if (peso > 50) {
		excesso = peso - 50;
		multa = excesso * 4.0;
	}

	printf("Peso dos peixe: %.2f kg \n", peso);
	printf("Excesso: %.2f kg \n", excesso);
	printf("Multa: R$ %.2f \n", multa);

	return 0;
}