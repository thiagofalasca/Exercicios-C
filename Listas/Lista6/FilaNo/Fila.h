typedef struct no No;

typedef struct fila Fila;

Fila *cria(void);

No *ins_fim(No *fim, float v);

No *ret_ini(No *ini);

void insere(Fila *f, float v);

int vazia(Fila *f);

float retira(Fila *f);

void libera(Fila *f);

void imprime(Fila *f);

int contador(Fila *f);

void *furaFila(Fila *f, float v);