/*
Aluno: Thiago Falasca Duarte
RA: a2350670
Turma: ES31-SO33A
Curso: Engenharia de Software
Matéria: Estrutura de Dados
*/
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

struct lista
{
    int info;
    struct lista *prox;
};

Lista *inicializa()
{
    return NULL;
}

void imprimir(Lista *L)
{
    Lista *aux = L;
    printf("\n");
    while (aux != NULL)
    {
        if (aux->prox == NULL)
            printf("[%d] -> ", aux->info);
        else
            printf("[%d]%d -> ", aux->info, aux->prox->info);
        aux = aux->prox;
    }
}

Lista *insereFim(Lista *L, int v)
{
    Lista *novo, *aux = L;
    novo = (Lista *)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = NULL;

    if (L != NULL)
    {
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        return L;
    }
    else
        return novo;
}

int contaRecursiva(Lista *L)
{
    if (L == NULL)
        return 0;
    else
        return 1 + contaRecursiva(L->prox);
}

int contaIterativa(Lista *L)
{
    Lista *aux = L;
    int count = 0;
    while (aux != NULL)
    {
        aux = aux->prox;
        count++;
    }
    return count;
}

void verificaLista(Lista *L)
{
    Lista *aux = L;
    if (L == NULL)
        printf("\nLista vazia!\n");
    else
    {
        if (aux->prox == NULL)
        {
            printf("\nLista possui somente uma celula!\n");
            return;
        }
        while (aux->info <= aux->prox->info)
        {
            aux = aux->prox;
            if (aux->prox == NULL)
            {
                printf("\nA lista esta em ordem crescente!\n");
                return;
            }
        }
        printf("\nA lista nao esta em ordem crescente!\n");
    }
}

void comparaListas(Lista *L1, Lista *L2)
{
    Lista *aux1 = L1, *aux2 = L2;
    if (contaRecursiva(L1) == contaRecursiva(L2))
    {
        if (L1 == NULL)
            printf("\nAs duas listas estao vazias!\n");
        else
        {
            while (aux1->info == aux2->info)
            {
                if (aux1->prox == NULL)
                {
                    printf("\nAs listas sao iguas!\n");
                    return;
                }
                aux1 = aux1->prox;
                aux2 = aux2->prox;
            }
        }
    }
    printf("\nAs listas sao diferentes!\n");
}

Lista *trocaPosicoes(Lista *L, int pos1, int pos2)
{
    Lista *p1 = L, *p2 = L, *antP1 = NULL, *antP2 = NULL, *aux;
    int cont = 1;
    if (pos1 > pos2)
    {
        int aux = 0;
        aux = pos1;
        pos1 = pos2;
        pos2 = aux;
    }
    if ((pos1 > contaRecursiva(L) || pos2 > contaRecursiva(L)) || pos1 == pos2)
    {
        printf("\n\nPosicoes invalidas!");
        return L;
    }
    while (cont != pos1)
    {
        antP1 = p1;
        p1 = p1->prox;
        cont++;
    }
    p2 = p1;
    while (cont != pos2)
    {
        antP2 = p2;
        p2 = p2->prox;
        cont++;
    }

    if (antP2 == p1)
    {
        if (p1 == L)
        {
            p1->prox = p2->prox;
            p2->prox = p1;
            return p2;
        }
        else
        {
            antP1->prox = p2;
            p1->prox = p2->prox;
            p2->prox = p1;
        }
    }
    else
    {
        if (p1 == L)
        {
            antP2->prox = p1;
            aux = p1->prox;
            p1->prox = p2->prox;
            p2->prox = aux;
            return p2;
        }
        else
        {
            antP1->prox = p2;
            antP2->prox = p1;
            aux = p1->prox;
            p1->prox = p2->prox;
            p2->prox = aux;
        }
    }
    return L;
}