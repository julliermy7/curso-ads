#include <stdio.h>

int main()
{
	int num, num1;
	num1 = 1

	// Estrutura de repetição em for
	for (num=1; num<=5; num++) {
		printf("sigma %d \n", num);
	}

	// Estrutura de repetição em while
	while(num1 <= 5)
	{
		printf("ziggers %d \n", num1);
		num1++;
	}

	// Estrutura de repetição em do while
	do
	{
		printf("ziggers %d \n", num1);
		num1++;
	}
	while(num1 <= 5);

	return 0;
}