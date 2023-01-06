#include <stdio.h>
#include <conio.h>
#include "Lista.h"

int main()
{
    Lista *L1 = NULL;

    L1 = insereInicio(L1, 'G');
    L1 = insereInicio(L1, '8');
    L1 = insereInicio(L1, 'W');
    L1 = insereInicio(L1, '7');
    L1 = insereInicio(L1, 'T');
    L1 = insereInicio(L1, '5');
    L1 = insereInicio(L1, 'E');
    L1 = insereInicio(L1, '1');
    L1 = insereInicio(L1, 'A');

    //	A 1 E 5 T 7 W 8 G
    //	A E T W G 8 7 5 1
    printf("Lista:");
    imprimir(L1);

    L1 = arrumaLista(L1);

    printf("\nLista arrumada:");
    imprimir(L1);

    getch();
}