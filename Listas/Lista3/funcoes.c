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
    struct lista *ant;
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
        printf("[%d]-> ", aux->info);
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
        novo->ant = aux;
        aux->prox = novo;
        return L;
    }
    else
        novo->ant = NULL;
    return novo;
}

Lista *separa(Lista *L, int v)
{
    Lista *L2, *aux = L;
    if (L == NULL)
    {
        printf("A lista esta vazia!");
        return NULL;
    }
    else
    {
        while (aux->info != v)
        {
            if (aux->prox == NULL)
            {
                printf("\nNumero nao encontrado!");
                return NULL;
            }
            aux = aux->prox;
        }
        L2 = aux->prox;
        L2->ant = NULL;
        aux->prox = NULL;
        return L2;
    }
}

Lista *concatena(Lista *L, Lista *L2)
{
    Lista *L3, *aux = L;

    while (aux != NULL)
    {
        L3 = insereFim(L3, aux->info);
        aux = aux->prox;
    }

    aux = L2;

    while (aux != NULL)
    {
        L3 = insereFim(L3, aux->info);
        aux = aux->prox;
    }
    return L3;
}

Lista *constroi(int n, int *vet)
{
    Lista *L = NULL;
    for (int i = 0; i < n; i++)
    {
        L = insereFim(L, vet[i]);
    }
    return L;
}

Lista *retira_prefixo(Lista *L, int n)
{
    Lista *aux = L;
    int count = 0;
    while (aux != NULL && n > count)
    {
        if (aux->prox == NULL)
        {
            free(aux);
            return NULL;
        }
        aux = aux->prox;
        free(aux->ant);
        count++;
    }
    aux->ant = NULL;
    return aux;
}