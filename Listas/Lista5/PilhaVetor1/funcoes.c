#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#define MAX 50

struct pilha
{
    int n;
    float vet[MAX];
};

Pilha *cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void push(Pilha *p, float v)
{
    if (p->n == MAX)
    {
        printf("\nCapacidade da pilha estourou.\n");
        return;
    }
    p->vet[p->n] = v;
    p->n++;
}

void imprimir(Pilha *p)
{    
    for (int i = p->n - 1; i >= 0; i--)
        printf("%.1f\n", p->vet[i]);
}

int vazia(Pilha *p)
{
    return (p->n == 0);
}

float pop(Pilha *p)
{
    float v;
    if (vazia(p))
    {
        printf("\nPilha vazia.\n");
        return 0;
    }
    v = p->vet[p->n - 1];
    p->n--;
    return v;
}

void libera(Pilha *p)
{
    free(p);
}

int testaMaisElementos(Pilha *P1, Pilha *P2)
{
    if (P1->n > P2->n)
        return 1;
    return 0;
}

void transferirElementos(Pilha *P1, Pilha *P2, int *flagErro)
{
    if (vazia(P1) || P1->n + P2->n > MAX)
    {
        *flagErro = 1;
        return;
    }
    for (int i = P1->n; i >= 0; i--)
    {
        push(P2, pop(P1));
    }
}

void inverter(Pilha *P)
{
    int aux;
    for (int i = 0, j = P->n - 1; i < j; i++, j--)
    {
        if (i <= j)
        {
            aux = P->vet[i];
            P->vet[i] = P->vet[j];
            P->vet[j] = aux;
        }
        else
            return;
    }
}

int iguais(Pilha *p1, Pilha *p2)
{
    int i = 0;
    do
    {
        if (p1->vet[i] != p2->vet[i] || p1->n != p2->n)
            return 0;
        i++;
    } while (i < p1->n);
    return 1;
}