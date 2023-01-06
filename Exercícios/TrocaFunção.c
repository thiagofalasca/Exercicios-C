#include <stdio.h>
#include <stdlib.h>

void troca(int *n1, int *n2)
{
    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main()
{
    int a, b, c;

    system("cls");

    printf("Escreva 3 numeros separados por 'enter' para serem ordenados\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        troca(&a, &b);
    }
    if (b > c)
    {
        troca(&b, &c);
    }
    if (a > b)
    {
        troca(&a, &b);
    }
    printf("\n\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}