typedef struct pilha Pilha;

Pilha *cria(void);

void push(Pilha *p, char v);

void imprimir(Pilha *p);

int vazia(Pilha *p);

char pop(Pilha *p);

void libera(Pilha *p);

void verificaExpressao(Pilha *p);

void verificaFormato(Pilha *p);