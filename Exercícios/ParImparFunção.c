#include <stdio.h>
#include <stdlib.h>

void ler()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    apresentar(num);
}

void apresentar(int num)
{
    if (num % 2 != 0)
    {
        printf("O numero e impar\n");
    }
    else
    {
        printf("O numero e par\n");
    }
}

int main()
{
    system("cls");

    ler();

    return 0;
}