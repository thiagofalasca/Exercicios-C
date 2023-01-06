#include <stdio.h>

int main()
{
    int cont, num, soma, somatotal;
    somatotal = 0;
    soma = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d ao quadrado e:\n", num);

    for (cont = 1; cont <= num; cont++)
    {
        printf("%d", soma);
        if (cont != num)
        {
            printf(" + ");
        }
        somatotal = somatotal + soma;
        soma = soma + 2;
    }
    printf(" = %d", somatotal);

    return 0;
}