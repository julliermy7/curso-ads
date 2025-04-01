#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nota;
	printf("\n Digite sua nota: ");
	scanf("%c", &nota);

	switch(nota) {
		case 'A':
			printf("sigma mitadas");
			break;
		case 'B':
			printf("bom viu lek");
			break;
		case 'C':
			printf("é, ta bao");
			break;
		case 'D':
			printf("bro");
			break;
		case 'E':
			printf("kkkkkkkkkkkkkkkkkkkkkkkk");
			break;
		case 'F':
			printf("bro you're cooked");
			break;
		default:
			printf("cade a nota burro");
			break;
		}

	system("pause");
	return 0;
}