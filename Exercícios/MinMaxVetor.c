#include <stdio.h>
#include <stdlib.h>

void mm(int *pvet, int *min, int *max, int numvet)
{
    *min = pvet[0];
    *max = pvet[0];
    for (int i = 1; i < numvet; i++)
    {
        if (*min > pvet[i])
            *min = pvet[i];
        if (*max < pvet[i])
            *max = pvet[i];
    }
}

int main()
{
    int numvet = 0, min, max;

    while (numvet <= 0)
    {
        printf("Digite a quantidade de numeros no vetor: ");
        scanf("%d", &numvet);

        if (numvet <= 0)
        {
            printf("O vetor deve ter tamanho maior que 0!\n");
        }
    }

    int vet[numvet];

    for (int i = 0; i < numvet; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    mm(vet, &min, &max, numvet);

    free(vet);

    printf("Minimo: %d. Maximo: %d.\n", min, max);

    return 0;
}