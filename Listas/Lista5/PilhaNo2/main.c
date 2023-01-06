#include <stdio.h>
#include <conio.h>
#include "Pilha.h"

int main()
{
    Pilha *p = cria(), *p2 = cria();

    push(p, 'A');
    push(p, '+');
    push(p, 'B');
    push(p, ')');
    push(p, '(');
    push(p, ')');
    push(p, '-');
    push(p, 'C');
    push(p, '(');
    push(p, '(');

    push(p2, 'A');
    push(p2, 'B');
    push(p2, 'B');
    push(p2, 'C');
    push(p2, 'B');
    push(p2, 'B');
    push(p2, 'A');

    printf("\nPilha\n");
    imprimir(p);

    verificaExpressao(p);

    printf("\nPilha 2\n");
    imprimir(p2);
    printf("\n");
    verificaFormato(p2);

    getch();
    return 0;
}