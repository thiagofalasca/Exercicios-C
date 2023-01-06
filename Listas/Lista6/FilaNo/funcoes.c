#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

struct no
{
    float info;
    struct no *prox;
};

struct fila
{
    No *ini;
    No *fim;
};

Fila *cria(void)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

No *ins_fim(No *fim, float v)
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

void insere(Fila *f, float v)
{
    f->fim = ins_fim(f->fim, v);
    if (f->ini == NULL)
        f->ini = f->fim;
}

int vazia(Fila *f)
{
    return (f->ini == NULL);
}

float retira(Fila *f)
{
    float v;
    if (vazia(f))
    {
        printf("\nFila vazia.");
        return 0;
    }
    v = f->ini->info;
    f->ini = ret_ini(f->ini);

    if (f->ini == NULL)
        f->fim = NULL;

    return v;
}

void libera(Fila *f)
{
    No *q = f->ini;
    while (q != NULL)
    {
        No *t = q->prox;
        free(q);
        q = t;
    }
    free(f);
    printf("\nFila liberada!");
}

void imprime(Fila *f)
{
    No *q;
    printf("\n");
    for (q = f->ini; q != NULL; q = q->prox)
        printf("%.1f\n", q->info);
}

int contador(Fila *f)
{
    No *q;
    int count = 0;
    for (q = f->ini; q != NULL; q = q->prox)
        count++;
    return count;
}

void *furaFila(Fila *f, float v)
{
    No *novo = (No *)malloc(sizeof(No));
    novo->info = v;
    novo->prox = f->ini;
    if (vazia(f))
        f->fim = novo;
    f->ini = novo;
}