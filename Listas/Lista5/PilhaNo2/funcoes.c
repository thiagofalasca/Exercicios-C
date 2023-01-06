#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

struct no
{
    char info;
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

No *ins_ini(No *l, char v)
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

void push(Pilha *p, char v)
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
        printf("%c\n", aux->info);
        aux = aux->prox;
    }
}

int vazia(Pilha *p)
{
    return (p->prim == NULL);
}

char pop(Pilha *p)
{
    char v;
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

void verificaExpressao(Pilha *p)
{
    int cont = 0, n = contador(p);
    No *aux = p->prim;
    for (int i = 0; i < n && cont != -1; i++)
    {
        if (aux->info == '(')
            cont++;
        if (aux->info == ')')
            cont--;
        aux = aux->prox;
    }
    if (cont != 0)
        printf("\nOs parenteses estao errados!\n");
    else
        printf("\nOs parenteses estao corretos!\n");
}

void verificaFormato(Pilha *p)
{
    int n = contador(p);
    int meio = n / 2;
    Pilha *auxp = cria();
    No *aux = p->prim, *aux2 = p->prim;
    for (int i = 0; i < meio; i++)
    {
        aux2 = aux2->prox;
    }
    if (aux2->info == 'C' && n % 2 == 1)
    {
        aux2 = aux2->prox;
        for (int i = 0; i < meio; i++)
        {
            push(auxp, aux2->info);
            aux2 = aux2->prox;
        }
        aux2 = auxp->prim;
        for (int i = 0; i < meio; i++)
        {
            if (aux->info != aux2->info)
            {
                printf("Formato errado!");
                return;
            }
            aux = aux->prox;
            aux2 = aux2->prox;
        }
        printf("Formato correto!");
        return;
    }
    printf("Formato errado!");
}