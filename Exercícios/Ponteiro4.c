#include <stdio.h>

int main()
{
    int i = 10, *ip, **ipp;
    float r = 5.5, *rp, **rpp;

    ip = &i;
    rp = &r;

    printf("\nO inteiro vale %d\n", i);
    printf("O real vale %.2f\n\n", r);

    ipp = &ip;
    rpp = &rp;

    **ipp = 15;
    **rpp = 10.5;

    printf("Agora o inteiro vale %d\n", i);
    printf("Agora o real vale %.2f", r);

    return 0;
}