#include <stdio.h>

int main()
{
    double num1, num2;
    double resultado;
    char operacao;

    printf("Escolha a operação : \n + Adicao \n - Subtracao \n * Multiplicacao \n / Divisao \n");
    scanf("%c", &operacao);  // nota o espaço antes do %c

    printf("Digite o primeiro numero: \n");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado e: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado e: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado e: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado e: %.2lf\n", resultado);
            } else {
                printf("Erro: divisao por zero.\n");
            }
            break;
        default:
            printf("Isso nao e uma operaçao valida.\n");
            break;
    }

    return 0;
}
