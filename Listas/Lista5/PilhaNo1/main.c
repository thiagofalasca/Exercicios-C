#include <stdio.h>
#include <conio.h>
#include "Pilha.h"

int main()
{
    Pilha *p1 = cria(), *p2 = cria();
    float r;
    int flagErro = 0;
    int igual = 0;

    push(p1, 1);
    push(p1, 2);
    push(p1, 3);

    push(p2, 5);
    push(p2, 6);

    printf("\nPilha 1\n");
    imprimir(p1);
    printf("\nPilha 2\n");
    imprimir(p2);

    if (testaMaisElementos(p1, p2))
        printf("\nP1 e maior que P2\n");
    else
        printf("\nP1 nao e maior que P2\n");

    transferirElementos(p1, p2, &flagErro);

    if (flagErro)
        printf("\nErro na transferencia\n");
    else
        printf("\nTransferencia realizada com sucesso\n");

    printf("\nPilha 1\n");
    imprimir(p1);
    printf("\nPilha 2\n");
    imprimir(p2);

    inverter(p2);
    printf("\nPilha 2 apos inverter\n");
    printf("\nPilha 2\n");
    imprimir(p2);

    /*
        igual = iguais(p1, p2);

        if (!igual)
            printf("\nPilhas nao sao iguais!\n");
        else
            printf("\nPilhas sao iguais!\n");
    */
    getch();
    return 0;
}