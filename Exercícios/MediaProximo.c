#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[5], media, modulo, md, n;
    int i;

    media = 0;

    for (i = 1; i < 6; i++)
    {
        printf("Escreva o %d numero: ", i);
        scanf("%f", &num[i - 1]);
    }

    for (i = 0; i < 5; i++)
    {
        media = media + num[i];
    }

    media = media / 5;
    modulo = media - num[0];

    if (modulo < 0)
    {
        modulo = -modulo;
    }

    md = modulo;
    n = num[0];

    for (i = 1; i < 5; i++)
    {
        modulo = media - num[i];

        if (modulo < 0)
        {
            modulo = -modulo;
        }
        if (modulo < md)
        {
            md = modulo;
            n = num[i];
        }
    }

    printf("A media desses numeros e: %.2f\nO numero que chegou mais proximo da media e o: %.2f", media, n);

    return 0;
}

/*
 */