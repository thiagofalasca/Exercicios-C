typedef struct lista Lista;

typedef struct no No;

typedef struct fila Fila;

typedef struct pilha Pilha;

Lista *insereInicio(Lista *L, char v);

Fila *criaFila(void);

No *ins_fim(No *fim, char v);

No *ret_ini(No *ini);

int vaziaFila(Fila *f);

void insereFila(Fila *f, char v);

char retiraFila(Fila *f);

Pilha *criaPilha(void);

No *ins_iniPilha(No *l, char v);

No *ret_iniPilha(No *l);

int vaziaPilha(Pilha *p);

void pushPilha(Pilha *p, char v);

char popPilha(Pilha *p);

int ehDigito(char c);

void imprimir(Lista *L);

Lista *arrumaLista(Lista *l);