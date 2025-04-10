#include <stdio.h>
#include <stdlib.h>

void hello(char[], int);

int main()
{
	char name[] = "Bro";
	int age = 18;

	hello(name, age);
	system("pause");
	return 0;
}

void hello(char name[], int age)
{
	printf("\nOlá %s", name);
	printf("\nVocê tem %d", age);
}