#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Fila.h"

int main()
{
    Fila *F1;
    float v;

    F1 = cria();
    insere(F1, 3);
    insere(F1, 4);
    insere(F1, 5);
    insere(F1, 6);

    printf("Fila antes de retirar");
    imprime(F1);

    v = retira(F1);

    printf("\nFila apos retirar");
    imprime(F1);

    printf("\nNumero de elementos na fila: %d\n", contador(F1));

    furaFila(F1, 10);

    printf("\nFila apos 'furar fila'");
    imprime(F1);

    getch();
}