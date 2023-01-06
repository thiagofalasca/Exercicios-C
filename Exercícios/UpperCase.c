#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char conceito, c;

inicio:
    printf("Digite o seu conceito anual (valor ente A e D): ");
    // while((c = getchar()) != '\n' && c != EOF);
    fflush(stdin);
    scanf("%c", &conceito);
    conceito = toupper(conceito);

    switch (conceito)
    {
    case 'A':
        printf("Conhecimento Pleno");
        break;
    case 'B':
        printf("Conhecimento Parcialmente Pleno");
        break;
    case 'C':
        printf("Conhecimento Suficiente");
        break;
    case 'D':
        printf("Conhecimento Insuiciente");
        break;
    default:
        printf("Conceito invalido.");
        goto inicio;
    }

    return 0;
}