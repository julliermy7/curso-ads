#include <stdio.h>
#include <stdlib.h>

int encontrarMaximo(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int maximo = encontrarMaximo(1, 4);
	printf("%d", maximo);

	system("pause");
	return 0;
}