#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcopy(char *str)
{
    char *strcopy;

    strcopy = (char *)malloc(strlen(str) * sizeof(char));

    strcpy(strcopy, str);

    return strcopy;
}

int main()
{
    char *copia;
    int strtam = 0;

    while (strtam <= 0)
    {
        printf("Digite o tamanho da string: ");
        scanf("%d", &strtam);
        if (strtam <= 0)
        {
            printf("O tamanho da string deve ser maior do que 0!\n");
        }
    }

    char string[strtam];

    printf("Digite a string: ");
    fflush(stdin);
    scanf("%[^\n]", string);

    copia = strcopy(string);

    printf("%s", copia);

    free(copia);
}