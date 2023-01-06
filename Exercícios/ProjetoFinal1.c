#include <stdio.h>

int main()
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nulo = 0;
    int maisVotado = 0, menosVotado = 101, votos[100], vencedor, perdedor;

    FILE *arquivo;

    arquivo = fopen("Votos.txt", "r");

    if (arquivo == NULL)
        printf("Erro na abertura!");
    else
        printf("Arquivo aberto!\n");

    for (int i = 0; i < 100; i++)
    {
        fscanf(arquivo, "%d\n", &votos[i]);
    }

    fclose(arquivo);

    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", votos[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        switch (votos[i])
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            c5++;
            break;
        default:
            nulo++;
        }
    }

    if (c1 > maisVotado)
    {
        maisVotado = c1;
        vencedor = 1;
    }
    if (c2 > maisVotado)
    {
        maisVotado = c2;
        vencedor = 2;
    }
    if (c3 > maisVotado)
    {
        maisVotado = c3;
        vencedor = 3;
    }
    if (c4 > maisVotado)
    {
        maisVotado = c4;
        vencedor = 4;
    }
    if (c5 > maisVotado)
    {
        maisVotado = c5;
        vencedor = 5;
    }

    if (c1 < menosVotado)
    {
        menosVotado = c1;
        perdedor = 1;
    }
    if (c2 < menosVotado)
    {
        menosVotado = c2;
        perdedor = 2;
    }
    if (c3 < menosVotado)
    {
        menosVotado = c3;
        perdedor = 3;
    }
    if (c4 < menosVotado)
    {
        menosVotado = c4;
        perdedor = 4;
    }
    if (c5 < menosVotado)
    {
        menosVotado = c5;
        perdedor = 5;
    }

    printf("O candidato %d venceu com %d votos\n", vencedor, maisVotado);
    printf("O candidato %d ficou em ultimo com %d votos\n", perdedor, menosVotado);
    printf("A eleicao teve %d votos nulos", nulo);

    return 0;
}