#include <stdio.h>

float Ler()
{
    float nota;
    scanf("%f", &nota);
    return nota;
}

float Media(float nota1, float nota2, float nota3)
{
    float media;
    media = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;
    return media;
}

void Escreva(float media)
{
    printf("MEDIA = %.1f\n", media);
}

int main()
{
    float valor1, valor2, valor3, media;

    valor1 = Ler();
    valor2 = Ler();
    valor3 = Ler();

    media = Media(valor1, valor2, valor3);

    Escreva(media);

    return 0;
}