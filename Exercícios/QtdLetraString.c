#include <stdio.h>
#include <stdlib.h>

int *letraString(char *str, char letra, int *quantidade)
{
    int *posicao = 0, num = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letra)
            num++;
    }

    posicao = (int *)malloc(num * sizeof(int));

    for (int i = 0, n = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letra)
        {
            posicao[num] = i;
            n++;
        }
    }

    *quantidade = num;
    return posicao;
}

int main()
{
    int *posicao = 0, quantidade = 0, tamanho;
    char letra;

    while (tamanho <= 0)
    {
        printf("Digite o tamanho da string: ");
        scanf("%d", &tamanho);
        if (tamanho <= 0)
        {
            printf("O tamanho da string deve ser maior do que 0!\n");
        }
    }

    char string[tamanho];

    printf("Digite a string: ");
    fflush(stdin);
    scanf("%[^\n]", string);
    printf("Digite a letra que quer achar: ");
    fflush(stdin);
    scanf("%c", &letra);

    posicao = letraString(string, letra, &quantidade);

    printf("Posicao das letras no vetor:");
    for (int i = 0; i < quantidade; i++)
    {
        printf(" %d", posicao[i]);
    }

    printf("\nQuantidade da letra: %d", quantidade);

    return 0;
}