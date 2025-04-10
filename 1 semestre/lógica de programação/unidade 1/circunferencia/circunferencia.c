#include <stdio.h>
#include <stdlib.h>

int main(){
	const double PI = 3.14159;
	double radius;
	double circumference;

	printf("Insira o raio do circulo : ");
	scanf("%lf", &radius);
	circumference = 2 * PI * radius;
	printf("A circunferencia é : %lf", circumference);
	system("pause");
	return 0;
}