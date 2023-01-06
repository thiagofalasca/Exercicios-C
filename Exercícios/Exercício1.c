#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet = (int *)malloc(20 * sizeof(int));

    printf("Digite os 20 numeros separados por 'enter'\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("\nAntes da troca:\n\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", vet[i]);
    }

    printf("\nDepois da troca:\n\n");

    for (int i = 0; i < 10; i++)
    {
        int aux;
        aux = vet[i];
        vet[i] = vet[19 - i];
        vet[19 - i] = aux;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", vet[i]);
    }

    free(vet);

    return 0;
}