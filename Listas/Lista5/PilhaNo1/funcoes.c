#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

struct no
{
    float info;
    struct no *prox;
};

struct pilha
{
    No *prim;
};

Pilha *cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

No *ins_ini(No *l, float v)
{
    No *n = (No *)malloc(sizeof(No));
    n->info = v;
    n->prox = l;
    return n;
}

No *ret_ini(No *l)
{
    No *n = l->prox;
    free(l);
    return n;
}

void push(Pilha *p, float v)
{
    p->prim = ins_ini(p->prim, v);
}

void imprimir(Pilha *p)
{
    No *aux = p->prim;
    if (aux == NULL)
        printf("\nPilha vazia!\n");
    while (aux != NULL)
    {
        printf("%.1f\n", aux->info);
        aux = aux->prox;
    }
}

int vazia(Pilha *p)
{
    return (p->prim == NULL);
}

float pop(Pilha *p)
{
    float v;
    if (vazia(p))
    {
        printf("Pilha vazia.\n");
        return 0;
    }
    v = p->prim->info;
    p->prim = ret_ini(p->prim);
    return v;
}

void libera(Pilha *p)
{
    No *n = p->prim;
    while (n != NULL)
    {
        No *t = n->prox;
        free(n);
        n = t;
    }
    free(p);
}

int contador(Pilha *P)
{
    No *aux = P->prim;
    int count = 0;
    while (aux != NULL)
    {
        aux = aux->prox;
        count++;
    }
    return count;
}

int testaMaisElementos(Pilha *P1, Pilha *P2)
{
    if (contador(P1) > contador(P2))
        return 1;
    return 0;
}

void transferirElementos(Pilha *P1, Pilha *P2, int *flagErro)
{
    No *aux = P1->prim;
    if (vazia(P1))
    {
        *flagErro = 1;
        return;
    }
    while (aux->prox != NULL)
    {
        aux = aux->prox;
        push(P2, pop(P1));
    }
    push(P2, pop(P1));
}

void inverter(Pilha *P)
{
    No *n = P->prim;
    Pilha *aux = cria();
    while (n != NULL)
    {
        push(aux, n->info);
        n = n->prox;
    }
    libera(P);
    P->prim = aux->prim;
}

int iguais(Pilha *p1, Pilha *p2)
{
    No *aux1 = p1->prim, *aux2 = p2->prim;
    int n1 = contador(p1), n2 = contador(p2);

    if (n1 == n2 && n1 == 0)
        return 1;
    if (n1 == 0 || n2 == 0)
        return 0;

    for (int i = 0; i < n1; i++)
    {
        if (aux1->info != aux2->info || n1 != n2)
            return 0;
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }
    return 1;
}
