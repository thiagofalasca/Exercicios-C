#include <stdio.h>

int Potencia(int base, int expoente)
{
    if (expoente > 1)
        base = base * Potencia(base, expoente - 1);
    else
        return base;
}

int main()
{
    int base, expoente, resultado;

    printf("Digite a base da potencia: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente == 0)
        resultado = 1;
    else
        resultado = Potencia(base, expoente);

    printf("O resultado da potencia e: %d", resultado);

    return 0;
}