#include <stdio.h>

int Soma(int n)
{

    if (n == 1)
        return 1;
    else
        return n + Soma(n - 1);
}

int main()
{
    int numeros, resultado;

    printf("Digite quantos numeros quer somar: ");
    scanf("%d", &numeros);

    resultado = Soma(numeros);

    printf("O resultado da soma e: %d", resultado);

    return 0;
}