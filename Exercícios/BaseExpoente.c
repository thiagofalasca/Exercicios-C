#include <stdio.h>
#include <math.h>

int main()
{
    int base, expoente;

    printf("Escreva a base da potencia\n");
    scanf("%d", &base);
    printf("Escreva o expoente da potencia\n");
    scanf("%d", &expoente);

    base = pow(base, expoente);

    printf("O resultado da conta e: %d", base);

    return 0;
}