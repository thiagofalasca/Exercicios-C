#include <stdio.h>

#define N 20

int main()
{
    int num[30], menor, i, j, p, maior;

    for (i = 0; i < N; i++)
    {
        printf("Escreva um numero: ", i);
        scanf("%d", &num[i]);
    }

    for (j = 0; j < N; j++)
    {
        menor = num[j];
        p = j;

        for (i = j + 1; i < N; i++)
        {
            if (num[i] < menor)
            {
                p = i;
                menor = num[i];
            }
        }
        maior = num[j];
        num[j] = menor;
        num[p] = maior;
    }
    for (i = 0; i < N; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}