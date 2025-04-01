#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A;
	double B;
	double C;

	printf("Digite o lado A : ");
	scanf("%lf", &A);
	printf("Digite o lado B : ");
	scanf("%lf", &B);

	C = sqrt(A*A + B*B);
	printf("Lado C : %lf", C);

	system("pause");
	return 0;

}