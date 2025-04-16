#include <stdio.h>

int main()
{
	int lados, area_quadrado, dobro_area;

	lados = 4;
	area_quadrado = (lados * lados); // Area do quadrado
	dobro_area = (area_quadrado * 2);
	
	printf("O dobro da area do quadrado: %d", dobro_area);

	return 0;
}