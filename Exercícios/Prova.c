#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int i, j, soma, gabarito[20], resposta[30][20];

    printf("Digite o gabarito da prova");
    for (i = 0; i < 20; i++)
    {
        printf("\nResposta questao 0%d: ", i + 1);
        // scanf("%d", &gabarito[i]);
        gabarito[i] = rand() % 5 + 1;
    }
    printf("\n");
    for (i = 0; i < 30; i++)
    {
        printf("Digite as respostas do aluno %d", i + 1);
        for (j = 0; j < 20; j++)
        {
            printf("\nResposta 0%d: ", j + 1);
            // scanf("%d", &resposta[i][j]);
            resposta[i][j] = rand() % 5 + 1;
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 30; i++)
    {
        soma = 0;
        for (j = 0; j < 20; j++)
        {
            if (gabarito[j] == resposta[i][j])
                soma++;
        }
        if (soma >= 10)
            printf("O aluno %d foi APROVADO com nota %d\n", i + 1, soma);
        else
            printf("O aluno %d foi REPROVADO com nota %d\n", i + 1, soma);
    }
    return 0;
}