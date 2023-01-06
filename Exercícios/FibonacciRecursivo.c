#include <stdio.h>

int Fibo(int num)
{
    if (num <= 1)
        return 1;
    return Fibo(num - 1) + Fibo(num - 2);
}

int main()
{
    int n;
    printf("Quantos numeros da sequencia Fibonacci deseja ver? ");
    scanf("%d", &n);

    if (n < 0)
        printf("Numero invalido");

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d", Fibo(i));
        else
            printf("%d, ", Fibo(i));
    }

    return 0;
}