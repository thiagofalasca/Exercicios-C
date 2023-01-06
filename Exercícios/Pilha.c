#include <stdlib.h>
#include <stdio.h>
#define MAX 50

struct pilha
{
    int n;
    float vet[MAX];
};
typedef struct pilha Pilha;

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
        printf("Capacidade da pilha estourou.\n");
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
        printf("Pilha vazia.\n");
        return;
    }
    v = p->vet[p->n - 1];
    p->n--;
    return v;
}

void libera(Pilha *p)
{
    free(p);
}

int main()
{
    Pilha *p1;
    float r;
    p1 = cria();
    r = pop(p1);
    push(p1, 4);
    push(p1, 5);
    push(p1, 7);
    push(p1, 8);
    printf("\n\n PILHA APOS INSERCAO\n");
    imprimir(p1);
    r = pop(p1);
    printf("\n\n PILHA APOS RETIRADA\n");
    imprimir(p1);
    push(p1, 9);
    push(p1, 10);
    printf("\n\n PILHA APOS INSERCAO\n");
    imprimir(p1);
    libera(p1);
}