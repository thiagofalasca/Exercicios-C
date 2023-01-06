#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila.h"
#define N 10

struct fila
{
    int ini, fim;
    float vet[N];
    char desc[N][10];
};

int incr(int i)
{
    return (i + 1) % N;
}

Fila *cria(void)
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->ini = f->fim = 0;
    return f;
}

int vazia(Fila *f)
{
    return (f->ini == f->fim);
}

void insere(Fila *f, float v, char d[10])
{
    if (incr(f->fim) == f->ini)
    {
        printf("Capacidade da fila estourou.\n");
        return;
    }
    f->vet[f->fim] = v;
    strcpy(f->desc[f->fim], d);
    f->fim = incr(f->fim);
}

float retira(Fila *f)
{
    float v;
    if (vazia(f))
    {
        printf("Fila vazia.\n");
        return 0;
    }
    v = f->vet[f->ini];
    f->ini = incr(f->ini);
    return v;
}

void libera(Fila *f)
{
    free(f);
}

void imprime(Fila *f)
{
    int i;
    for (i = f->ini; i != f->fim; i = incr(i))
        printf("%.1f\n%s\n\n", f->vet[i], f->desc[i]);
}