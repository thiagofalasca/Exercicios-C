#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero para calcularmos a raiz\n");
    scanf("%f", &numero);

    numero = sqrt(numero);

    printf("O resultado e: %.2f", numero);

    return 0;
}