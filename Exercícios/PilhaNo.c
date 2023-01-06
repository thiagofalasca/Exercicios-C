#include <stdlib.h>
#include <stdio.h>

struct no
{
    float info;
    struct no *prox;
};
typedef struct no No;

struct pilha
{
    No *prim;
};
typedef struct pilha Pilha;

Pilha *cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

No *ins_ini(No *l, float v)
{
    No *p = (No *)malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}

No *ret_ini(No *l)
{
    No *p = l->prox;
    free(l);
    return p;
}

void push(Pilha *p, float v)
{
    p->prim = ins_ini(p->prim, v);
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
        exit(1); /* aborta programa */
    }

    v = p->prim->info;
    p->prim = ret_ini(p->prim);
    return v;
}

void imprimir(Pilha *p)
{
    No *aux = p->prim;

    if (aux == NULL)
        printf("\n\nPilha vazia!\n\n");

    while (aux != NULL)
    {
        printf("\n%f", aux->info);
        aux = aux->prox;
    }
}

void libera(Pilha *p)
{
    No *q = p->prim;
    while (q != NULL)
    {
        No *t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

int main()
{
    Pilha *p1;
    float r;

    p1 = cria();
    push(p1, 1);
    push(p1, 2);
    push(p1, 3);
    push(p1, 4);
    push(p1, 5);
    printf("\n\nEMPILHADO");
    imprimir(p1);
    r = pop(p1);
    printf("\n\nDESEMPILHADO");
    imprimir(p1);
    push(p1, 8);
    printf("\n\nEMPILHADO");
    imprimir(p1);
    libera(p1);
    printf("\n\nPILHA LIBERADA");
}