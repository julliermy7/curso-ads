#include <stdio.h>

int main()
{
	float temp_fah = 90.0;
	float temp_celsius = ((temp_fah - 32) * 5.0 / 9.0);

	printf("Temperatura em celsius: %.2f", temp_celsius);

	return 0;
}