#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50] = "Arroz";
    char string2[] = "Games"; 

    strcat(string1 ,string2);

    printf("Resultado: %s\n", string1);
}
