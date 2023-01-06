#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define N 10

struct fila
{
    int ini, fim;
    float vet[N];
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

void insere(Fila *f, float v)
{
    if (incr(f->fim) == f->ini)
    {
        printf("Capacidade da fila estourou.\n");
        return;
    }
    f->vet[f->fim] = v;
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
        printf("%.1f\n", f->vet[i]);
}

int contador(Fila *f)
{
    int i, count = 0;
    for (i = f->ini; i != f->fim; i = incr(i))
        count++;
    return count;
}

void furaFila(Fila *f, float v)
{
    if (incr(f->fim) == f->ini)
    {
        printf("Capacidade da fila estourou.\n");
        return;
    }
    if (vazia(f))
    {
        insere(f, v);
        return;
    }
    f->ini -= 1;
    f->vet[f->ini] = v;
}