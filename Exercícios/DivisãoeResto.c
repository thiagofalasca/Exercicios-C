#include <stdio.h>

int main()
{
    int numero1, numero2, divisao, resto;

    printf("Digite o primeiro numero da divisao\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero da divisao\n");
    scanf("%d", &numero2);

    divisao = numero1 / numero2;
    resto = numero1 - (divisao * numero2);

    printf("O resultado da divisao e: %d \n O resto da divisao e : %d", divisao, resto);

    return 0;
}