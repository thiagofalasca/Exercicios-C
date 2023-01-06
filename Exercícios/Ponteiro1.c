#include <stdio.h>

int main()
{
    int i = 10, *ip;
    float r = 5.5, *ir;

    ip = &i;
    ir = &r;

    printf("\nO inteiro vale %d\n", i);
    printf("O real vale %.2f\n\n", r);

    *ip = 15;
    *ir = 10.5;

    printf("Agora o inteiro vale %d\n", i);
    printf("Agora o real vale %.2f", r);

    return 0;
}