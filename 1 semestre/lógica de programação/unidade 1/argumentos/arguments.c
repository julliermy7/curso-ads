#include <stdio.h>
#include <stdlib.h>

void birthday(char x[], int y)
{
	printf("Happy birthday %s \n", x);
	printf("You are %d \n", y);
}

int main() {
	char nome[] = "bro";
	int idade = 18;

	birthday(nome, idade);

    system("pause");
    return 0;
}