#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#define MAX 50

struct pilha
{
    int n;
    char vet[MAX];
};

Pilha *cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void push(Pilha *p, char v)
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
        printf("%c\n", p->vet[i]);
}

int vazia(Pilha *p)
{
    return (p->n == 0);
}

char pop(Pilha *p)
{
    char v;
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

void verificaExpressao(Pilha *p)
{
    int cont = 0;
    for (int i = 0; i < p->n && cont != -1; i++)
    {
        if (p->vet[i] == '(')
            cont++;
        if (p->vet[i] == ')')
            cont--;
    }
    if (cont != 0)
        printf("\nOs parenteses estao errados!\n");
    else
        printf("\nOs parenteses estao corretos!\n");
}

void verificaFormato(Pilha *p)
{
    int meio = (p->n - 1) / 2;
    for (int i = 0, j = p->n - 1; i < meio; i++, j--)
    {
        if (p->vet[i] != p->vet[j] || p->vet[meio] != 'C' || p->n % 2 != 1)
        {
            printf("Formato errado!");
            return;
        }
    }
    printf("Formato correto!");
}