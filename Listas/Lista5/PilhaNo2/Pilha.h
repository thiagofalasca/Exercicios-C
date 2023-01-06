typedef struct pilha Pilha;

typedef struct no No;

Pilha *cria(void);

No *ins_ini(No *l, char v);

No *ret_ini(No *l);

void push(Pilha *p, char v);

void imprimir(Pilha *p);

int vazia(Pilha *p);

char pop(Pilha *p);

void libera(Pilha *p);

int contador(Pilha *P);

void verificaExpressao(Pilha *p);

void verificaFormato(Pilha *p);