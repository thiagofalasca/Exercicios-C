#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Fila.h"

int main()
{
    Fila *espera = cria();
    float v;

    insere(espera, 1, "aviao1");
    insere(espera, 2, "aviao2");
    insere(espera, 3, "aviao3");
    insere(espera, 4, "aviao4");

    printf("\nQuantidade de avioes na fila de espera: %d\n", contador(espera));

    printf("Fila de espera antes de retirar\n");
    imprime(espera);

    v = retira(espera);

    printf("\nFila de processos apos retirar\n");
    imprime(espera);

    printf("\nPrimeiro aviao da fila\n");
    imprimePrim(espera);

    getch();
}