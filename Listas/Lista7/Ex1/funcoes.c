#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#define MAX 16
#define MAX_PILHA 10

struct pilha
{
    int n1;
    int n2;
    float vet[MAX];
};

Pilha *cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->n1 = 0;
    p->n2 = 0;
    return p;
}

int vazia(Pilha *p)
{
    return (p->n1 + p->n2 == 0);
}

void push(Pilha *p, float v, int qualPilha)
{
    if ((p->n1 + p->n2 == MAX) || (p->n1 == MAX_PILHA && qualPilha) || (p->n2 == MAX_PILHA && !qualPilha))
    {
        printf("Capacidade da pilha estourou.\n");
        return;
    }
    if (qualPilha)
    {
        p->vet[p->n1] = v;
        p->n1++;
    }
    else
    {
        p->vet[MAX - p->n2 - 1] = v;
        p->n2++;
    }
}

float pop(Pilha *p, int qualPilha)
{
    float v;
    if ((p->n1 == 0 && qualPilha) || (p->n2 == 0 && !qualPilha))
    {
        printf("Pilha vazia.\n");
        return 0;
    }
    if (qualPilha)
    {
        v = p->vet[p->n1 - 1];
        p->n1--;
    }
    else
    {
        v = p->vet[p->n2 - 1];
        p->n2--;
    }
    return v;
}

void libera(Pilha *p)
{
    free(p);
}

void imprimir(Pilha *p)
{
    for (int i = MAX - p->n2; i < MAX; i++)
        printf("%.1f\n", p->vet[i]);
        
    for (int i = p->n1 - 1; i >= 0; i--)
        printf("%.1f\n", p->vet[i]);
}