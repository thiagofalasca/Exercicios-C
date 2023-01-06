#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Gerar um vetor tamanho 5
    int *vet = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        vet[i] = i + 2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vet[i]);
    }

    // Aumentar o vetor para tamanho 7
    printf("Inicio antes do realloc: %p\n", vet);
    vet = (int *)realloc(vet, 7 * sizeof(int));

    // Insere nas duas novas posições
    if (vet != NULL)
    {
        vet[5] = 10;
        vet[6] = 15;

        printf("\n\nREALLOC:\n");
        printf("Inicio apos o realloc: %p\n", vet);
        for (int i = 0; i < 7; i++)
        {
            printf("%d\n", vet[i]);
        }
    }

    // Reduz o vetor para tamanho 4
    printf("Inicio antes do realloc: %p\n", vet);
    vet = (int *)realloc(vet, 4 * sizeof(int));

    if (vet != NULL)
    {
        printf("\n\nREALLOC:\n");
        printf("Inicio apos o realloc: %p\n", vet);
        for (int i = 0; i < 4; i++)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}