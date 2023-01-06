#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Lista.h"

struct lista
{
    char info;
    struct lista *prox;
};

struct no
{
    char info;
    struct no *prox;
};

struct fila
{
    No *ini;
    No *fim;
};

struct pilha
{
    No *prim;
};

Lista *insereInicio(Lista *L, char v)
{
    Lista *novo;
    novo = (Lista *)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = L;
    return novo;
}

Fila *criaFila(void)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

No *ins_fim(No *fim, char v)
{
    No *p = (No *)malloc(sizeof(No));
    p->info = v;
    p->prox = NULL;
    if (fim != NULL)
        fim->prox = p;
    return p;
}

No *ret_ini(No *ini)
{
    No *p = ini->prox;
    free(ini);
    return p;
}

int vaziaFila(Fila *f)
{
    return (f->ini == NULL);
}

void insereFila(Fila *f, char v)
{
    f->fim = ins_fim(f->fim, v);
    if (f->ini == NULL)
        f->ini = f->fim;
}

char retiraFila(Fila *f)
{
    char v;
    if (vaziaFila(f))
    {
        printf("Fila vazia.\n");
        exit(1);
    }
    v = f->ini->info;
    f->ini = ret_ini(f->ini);

    if (f->ini == NULL)
        f->fim = NULL;

    return v;
}

Pilha *criaPilha(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

No *ins_iniPilha(No *l, char v)
{
    No *p = (No *)malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}

No *ret_iniPilha(No *l)
{
    No *p = l->prox;
    free(l);
    return p;
}

int vaziaPilha(Pilha *p)
{
    return (p->prim == NULL);
}

void pushPilha(Pilha *p, char v)
{
    p->prim = ins_iniPilha(p->prim, v);
}

char popPilha(Pilha *p)
{
    char v;
    if (vaziaPilha(p))
    {
        printf("Pilha vazia.\n");
        exit(1);
    }

    v = p->prim->info;
    p->prim = ret_iniPilha(p->prim);
    return v;
}

int ehDigito(char c)
{
    if (isdigit(c))
        return 1;
    return 0;
}

void imprimir(Lista *L)
{
    Lista *p = L;

    while (p != NULL)
    {
        printf("%c ", p->info);
        p = p->prox;
    }
}

Lista *arrumaLista(Lista *l)
{
    Fila *f = criaFila();
    Pilha *p = criaPilha();
    Lista *q = l;

    while (q != NULL)
    {
        if (ehDigito(q->info))
        {
            insereFila(f, q->info);
            q = q->prox;
        }
        else
        {
            pushPilha(p, q->info);
            q = q->prox;
        }
    }

    Lista *novo = NULL;

    while (!vaziaFila(f))
    {
        novo = insereInicio(novo, retiraFila(f));
    }

    while (!vaziaPilha(p))
    {
        novo = insereInicio(novo, popPilha(p));
    }

    return novo;
}