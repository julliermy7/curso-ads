#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2, media;
	media = (num1 + num2) / 2;
	printf("Insira o primeiro número. \n");
	scanf("%f", &num1);
	printf("Insira o segundo número. \n");
	scanf("%f", &num2);
	printf("A sua média é: %f", media);
	return 0;
}