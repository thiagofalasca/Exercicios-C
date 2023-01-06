/*
Aluno: Thiago Falasca Duarte
RA: a2350670
Turma: ES31-SO33A
Curso: Engenharia de Software
Matéria: Estrutura de Dados
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Lista.h"

int main()
{
    Lista *L1 = inicializa(), *L2 = inicializa();

    L1 = insereFim(L1, -1);
    L1 = insereFim(L1, 15);
    L1 = insereFim(L1, 43);

    L2 = insereFim(L2, -1);
    L2 = insereFim(L2, 15);
    L2 = insereFim(L2, 43);

    printf("\nLista 1:");
    imprimir(L1);
    printf("\n\nLista2:");
    imprimir(L2);

    printf("\n\nNumero de celulas funcao recursiva: %d\n", contaRecursiva(L1));
    printf("\nNumero de celulas funcao iterativa: %d\n", contaIterativa(L1));

    verificaLista(L1);

    comparaListas(L1, L2);

    L1 = trocaPosicoes(L1, 1, 2);

    printf("\nLista 1 apos trocar as posicoes:\n");
    imprimir(L1);

    getch();

    return 0;
}