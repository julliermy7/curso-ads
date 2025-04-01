#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;
	printf("Escreva sua idade :");
	scanf("%d", &idade);
	if (idade >= 18) {
		printf("Você e maior de idade. \n");
	} else if (idade < 0) {
		printf("Você nem nasceu ainda mlk \n");
	} else {
		printf("Você é menor de idade.  \n");
	}

	system("pause");
	return 0;
}