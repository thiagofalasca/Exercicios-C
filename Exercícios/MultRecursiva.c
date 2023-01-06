#include <stdio.h>

int Mult(int n1, int n2)
{
    if (n1 > 0)
        return n2 + Mult(n1 - 1, n2);
    else
        return 0;
}

int main()
{
    int n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo: ");
    scanf("%d", &n2);

    if (n1 < 0 || n2 < 0)
        printf("Os numeros devem ser naturais!");
    else
    {
        resultado = Mult(n1, n2);
        printf("Resultado e: %d", resultado);
    }
    return 0;
}