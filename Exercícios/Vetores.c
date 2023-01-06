#include <stdio.h>

int main()
{
    int i, j, aux, invalido = 0, posicaopar = 0, posicaoimpar = 24, posicaoA = 0, posicaoB = 24, vetorA[25], vetorB[25], vetorC[50];

    for (i = 0; i < 25; i++)
    {
        printf("\nDigite o numero que vai ocupar a posicao %d: ", i);
        scanf("%d", &aux);

        for (j = 0; j < i; j++)
        {
            if (vetorA[j] == aux || aux < 0)
            {
                invalido = 1;
                break;
            }
        }
        if (invalido == 1)
        {
            printf("\nNao digite valores repetidos ou negativos.");
            invalido = 0;
            i -= 1;
        }
        else
        {
            vetorA[i] = aux;
        }
    }
    for (i = 0; i < 25; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            vetorB[posicaopar] = vetorA[i];
            posicaopar++;
        }
        else
        {
            vetorB[posicaoimpar] = vetorA[i];
            posicaoimpar--;
        }
    }
    printf("\nVetor A: [");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vetorA[i]);
    }
    printf("]\n");
    printf("Vetor B: [");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vetorB[i]);
    }
    printf("]\n\n");
    for (i = 0; i < 25; i++)
    {
        aux = -1;
        for (j = 0; j < 25; j++)
        {
            if (vetorA[j] == vetorB[i])
            {
                aux = j;
            }
        }
        printf("O numero %d e o elemento %d em B e o elemento %d em A\n", vetorB[i], i, aux);
    }
    for (i = 0; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            vetorC[i] = vetorA[posicaoA];
            posicaoA++;
        }
        else
        {
            vetorC[i] = vetorB[posicaoB];
            posicaoB--;
        }
    }
    printf("\n Vetor C: [");
    for (i = 0; i < 50; i++)
    {
        printf("%d ", vetorC[i]);
    }
    printf("]\n");

    return 0;
}