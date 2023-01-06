typedef struct pilha Pilha;

Pilha *cria(void);

void push(Pilha *p, float v, int qualPilha);

float pop(Pilha *p, int qualPilha);

int vazia(Pilha *p);

void libera(Pilha *p);

void imprimir(Pilha *p);