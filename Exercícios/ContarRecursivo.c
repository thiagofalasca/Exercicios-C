#include <stdio.h>

int Contador(int num)
{
    int count;
    if (num > 0)
        count = 1 + Contador(num / 10);
    else
        return 0;
    return count;
}

int main()
{
    int numero, resultado;

    printf("Escreva um numero: ");
    scanf("%d", &numero);

    if (numero != 0)
        resultado = Contador(numero);
    else
        resultado = 1;

    printf("O numero possui %d digitos", resultado);

    return 0;
}