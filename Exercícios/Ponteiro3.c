#include <stdio.h>

int main()
{
    int i, j, *ip, *jp;

    printf("Digite um numero: ");
    scanf("%d", &i);
    printf("Digite um numero: ");
    scanf("%d", &j);

    ip = &i;
    jp = &j;

    if (ip > jp)
        printf("%p", ip);
    else
        printf("%p", jp);

    return 0;
}