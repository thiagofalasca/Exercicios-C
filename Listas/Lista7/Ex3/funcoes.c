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

No *ins_fim(Fila *f, float v)
{
    No *p = (No *)malloc(sizeof(No));
    p->info = v;
    if (vazia(f))
        p->prox = p;
    else
    {
        p->prox = f->ini;
        f->fim->prox = p;
    }
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
    f->fim = ins_fim(f, v);
    if (vazia(f))
        f->ini = f->fim;
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
    f->fim->prox = f->ini;

    if (f->ini == NULL)
        f->fim = NULL;

    return v;
}

int vazia(Fila *f)
{
    return (f->ini == NULL);
}

int contador(Fila *f)
{
    No *q;
    int count = 0;
    q = f->ini;
    if (q != NULL)
    {
        do
        {
            count++;
            q = q->prox;
        } while (q != f->ini);
    }
    return count;
}

void imprime(Fila *f)
{
    No *q;
    printf("\n");
    q = f->ini;
    if (q != NULL)
    {
        do
        {
            printf("%.1f\n", q->info);
            q = q->prox;
        } while (q != f->ini);
    }
    else
    {
        printf("Fila vazia!\n");
        return;
    }
}