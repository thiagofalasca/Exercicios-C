#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char genero, c;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

inicio:
    printf("Digite o seu genero ('m' para masculino e 'f' para feminino)");
    // while((c = getchar()) != '\n' && c != EOF);
    fflush(stdin);
    scanf("%c", &genero);

    if (genero == 'm')
    {
        printf("Ola senhor, voce tem %d anos", idade);
    }
    else if (genero == 'f')
    {
        printf("Ola senhora, voce tem %d anos", idade);
    }
    else
    {
        printf("Digite um valor valido para o seu genero.\n");
        goto inicio;
    }
    return 0;
}