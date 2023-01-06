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
    Lista *L3 = inicializa();

    L1 = insereFim(L1, 1);
    L1 = insereFim(L1, 3);
    L1 = insereFim(L1, 5);

    L2 = insereFim(L2, 2);
    L2 = insereFim(L2, 4);
    L2 = insereFim(L2, 6);
    L2 = insereFim(L2, 7);
    L2 = insereFim(L2, 8);

    printf("Lista 1:");
    imprimir(L1);
    printf("\n\nLista 2:");
    imprimir(L2);

    L3 = intercala(&L1, &L2);

    printf("\n\nLista 1 e 2 intercaladas:");
    imprimir(L3);
    printf("\n\nLista 1 e 2 apos intercalar:");
    printf("\nLista 1:");
    imprimir(L1);
    printf("\n\nLista 2:");
    imprimir(L2);

    int n1, n2;

    printf("\n\nDigite primeira posicao da lista 3 que deseja trocar: ");
    scanf("%d", &n1);

    printf("\nDigite a segunda posicao da lista 3 que deseja trocar: ");
    scanf("%d", &n2);

    L3 = trocaPosicoes(L3, n1, n2);

    printf("\nLista 3 apos trocar posicoes:");
    imprimir(L3);

    getch();

    return 0;
}