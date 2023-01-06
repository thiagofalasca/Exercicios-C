#include <stdio.h>
#include <conio.h>
#include "Pilha.h"

int main()
{

    Pilha *p = cria();
    float r;

    // 1 = Pilha 1
    // 0 = Pilha 2

    push(p, 1, 1);
    push(p, 2, 1);
    push(p, 3, 1);
    push(p, 4, 1);
    push(p, 5, 1);
    push(p, 6, 1);
    push(p, 7, 1);
    push(p, 8, 1);
    push(p, 9, 1);
    push(p, 10, 0);
    push(p, 11, 0);
    push(p, 11, 0);
    push(p, 12, 0);
    push(p, 13, 0);
    push(p, 14, 0);
    push(p, 15, 0);
    push(p, 16, 0);
    push(p, 17, 0);

    printf("\nPilha:\n");
    imprimir(p);

    pop(p, 1);
    pop(p, 0);

    printf("\nPilha apos pop:\n");
    imprimir(p);

    getch();
    return 0;
}