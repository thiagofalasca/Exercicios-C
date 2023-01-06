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
    Lista *L3 = inicializa(), *L4 = inicializa();
    int *vet, n = 0;

    L1 = insereFim(L1, 1);
    L1 = insereFim(L1, 2);
    L1 = insereFim(L1, 3);
    L1 = insereFim(L1, 4);
    L1 = insereFim(L1, 5);
    L1 = insereFim(L1, 6);

    printf("\n\tAntes de separar");
    printf("\nLista 1:");
    imprimir(L1);

    L2 = separa(L1, 3);

    printf("\n\n\tDepois de separar");
    printf("\nLista 1:");
    imprimir(L1);
    printf("\n\nLista 2:");
    imprimir(L2);

    L3 = concatena(L1, L2);

    printf("\n\n\tLista 1 e 2 concatenadas");
    printf("\nLista 3:");
    imprimir(L3);

    while (n <= 0)
    {
        printf("\n\nDigite o tamanho do vetor para criar uma lista: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("\nO vetor deve ter tamanho maior que 0!");
    }

    vet = (int *)malloc(n * sizeof(int));

    printf("\nDigite os valores do vetor separados por <enter>:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    L4 = constroi(n, vet);

    printf("\n\tLista criada com o vetor");
    printf("\nLista 4:");
    imprimir(L4);

    n = 0;

    while (n <= 0)
    {
        printf("\n\nDigite o numero de elementos que deseja remover da lista: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("\nO numero deve ser maior do que 0!");
    }

    L4 = retira_prefixo(L4, n);

    printf("\n\tLista depois de remover");
    printf("\nLista 4:");
    imprimir(L4);

    getch();

    return 0;
}