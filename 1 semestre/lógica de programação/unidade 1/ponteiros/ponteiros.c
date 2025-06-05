#include <stdio.h>

int main()
{
	int x = 20;
	int *p = &x;


  int a[3] = {1,2,3};
  int *p1 = a;

	printf("Valor de x: %d\n", x);         // Imprime o valor
    printf("Endereco de x: %p\n", &x);     // Imprime o endereço de x
    printf("Conteudo de p (endereço): %p\n", p);  // Também imprime o endereço (igual ao &x)
    printf("Valor apontado por p: %d\n", *p);     // Imprime o valor de x (acesso indireto)
    
    printf("%d", *(p1 + 1));

    return 0;
}
