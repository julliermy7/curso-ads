#include <stdio.h>

int main()
{
	float areaDaParede,
		  rendimentoDoLitro = 3.00,
		  litrosPorLata = 18.00,
		  precoPorLata = 80.00,
		  precoTotal;
	int quantidadeLatas;

	printf("Digite a area da parede em metros quadrados: ");
	scanf("%f", &areaDaParede);

	quantidadeLatas = (areaDaParede / (rendimentoDoLitro * litrosPorLata));
	precoTotal = quantidadeLatas * precoPorLata;
	printf("Voce deve comprar %i lata(s), custando R$%.2f",
           quantidadeLatas, precoTotal);
    return 0;

}