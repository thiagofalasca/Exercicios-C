typedef struct pilha Pilha;

typedef struct no No;

Pilha *cria(void);

No *ins_ini(No *l, float v);

No *ret_ini(No *l);

void push(Pilha *p, float v);

void imprimir(Pilha *p);

int vazia(Pilha *p);

float pop(Pilha *p);

void libera(Pilha *p);

int contador(Pilha *P);

int testaMaisElementos(Pilha *P1, Pilha *P2);

void transferirElementos(Pilha *P1, Pilha *P2, int *flagErro);

void inverter(Pilha *P);

int iguais(Pilha *p1, Pilha *p2);