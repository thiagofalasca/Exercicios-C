#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Fila.h"

int main()
{
    Fila *F1;
    float v;

    F1 = cria();
    insere(F1, 1, "prog1");
    insere(F1, 2, "prog2");
    insere(F1, 3, "prog3");
    insere(F1, 4, "prog4");

    printf("Fila antes de retirar\n");
    imprime(F1);

    v = retira(F1);

    printf("\nFila apos retirar\n");
    imprime(F1);

    getch();
}