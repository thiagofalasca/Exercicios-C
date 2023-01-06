#include <stdio.h>

int main()
{
    int i, j, soma, impar = 0, numero[10];

    printf("Digite 10 numeros inteiros para calcularmos o quadrado deles\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &numero[i]);

    for (i = 0; i < 10; i++)
    {
        soma = 0;

        printf("%d^2 = ", numero[i]);
        if (numero[i] < 0)
            numero[i] = -numero[i];

        for (j = 0; j < numero[i]; j++)
        {
            impar = (2 * j) + 1;

            if (j == numero[i] - 1)
                printf("%d = ", impar);
            else
                printf("%d + ", impar);

            soma = soma + impar;
        }
        printf("%d\n", soma);
    }
    return 0;
}