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
    if (aux != NULL)
    {
        do
        {
            printf("%d[%d]%d -> ", aux->ant->info, aux->info, aux->prox->info);
            aux = aux->prox;
        } while (aux != L);
    }
    else
        printf("Lista vazia!!!");
}

Lista *insereFim(Lista *L, int v)
{
    Lista *novo, *aux = L;
    novo = (Lista *)malloc(sizeof(Lista));
    novo->info = v;
    if (L == NULL)
    {
        novo->prox = novo;
        novo->ant = novo;
        return novo;
    }
    else
    {
        novo->prox = L;
        L->ant = novo;
        while (aux->prox != L)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->ant = aux;
    }
    return L;
}

int contador(Lista *L)
{
    Lista *aux = L;
    int count = 0;
    if (aux != NULL)
    {
        do
        {
            aux = aux->prox;
            count++;
        } while (aux != L);
    }
    return count;
}

Lista *libera(Lista *L)
{
    Lista *p = L;
    if (L != NULL)
    {
        do
        {
            Lista *t = p->prox;
            free(p);
            p = t;
        } while (p != L);
    }
    return NULL;
}

Lista *intercala(Lista **L1, Lista **L2)
{
    Lista *aux1 = *L1, *aux2 = *L2, *L3 = inicializa();
    int num1 = contador(*L1), num2 = contador(*L2);
    if (num1 == 0 && num2 == 0)
        return NULL;
    else
    {
        int cont1 = 0, cont2 = 0;
        do
        {
            if (cont1 != num1)
            {
                L3 = insereFim(L3, aux1->info);
                aux1 = aux1->prox;
                cont1++;
            }
            if (cont2 != num2)
            {
                L3 = insereFim(L3, aux2->info);
                aux2 = aux2->prox;
                cont2++;
            }
        } while (!(aux1 == *L1 && aux2 == *L2));
        *L1 = libera(*L1);
        *L2 = libera(*L2);
        return L3;
    }
}

Lista *trocaPosicoes(Lista *L, int pos1, int pos2)
{
    Lista *p1 = L, *p2 = L, *aux;
    int cont = 1;
    if (pos1 > pos2)
    {
        int aux = 0;
        aux = pos1;
        pos1 = pos2;
        pos2 = aux;
    }
    if ((pos1 > contador(L) || pos2 > contador(L)) || pos1 == pos2)
    {
        printf("\n\nPosicoes incorretas!");
        return L;
    }
    while (cont != pos1)
    {
        p1 = p1->prox;
        cont++;
    }
    p2 = p1;
    while (cont != pos2)
    {
        p2 = p2->prox;
        cont++;
    }
    if (p2->ant == p1)
    {
        p1->ant->prox = p2;
        p2->prox->ant = p1;
        p1->prox = p2->prox;
        p2->ant = p1->ant;
        p1->ant = p2;
        p2->prox = p1;
    }
    else
    {
        if (p1 == L && p2->prox == L)
        {
            p2->prox = p1->prox;
            p1->prox->ant = p2;
            p1->prox = p2;
            p1->ant = p2->ant;
            p2->ant->prox = p1;
            p2->ant = p1;
        }
        else
        {
            p1->prox->ant = p2;
            p2->prox->ant = p1;
            p1->ant->prox = p2;
            p2->ant->prox = p1;
            aux = p2->prox;
            p2->prox = p1->prox;
            p1->prox = aux;
            aux = p2->ant;
            p2->ant = p1->ant;
            p1->ant = aux;
        }
    }
    if (p1 == L)
        return p2;
    return L;
}