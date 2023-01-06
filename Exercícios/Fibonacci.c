#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibo, fibo2, soma, n;

    fibo = 1;
    soma = 1;

    printf("Digite a quantidade de numeros da sequancia que deseja ver: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Numero invalido");
    }
    else if (n == 1)
    {
        printf("1");
    }
    else
    {
        while (n > 0)
        {
            printf("\n%d", fibo);
            if (fibo == 1)
            {
                printf("\n%d", fibo);
            }
            fibo2 = fibo;
            fibo = fibo2 + soma;
            soma = fibo2;
            n--;
        }
    }
    return 0;
}