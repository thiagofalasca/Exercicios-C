typedef struct no No;

typedef struct fila Fila;

Fila *cria(void);

No *ins_fim(Fila *f, float v);

No *ret_ini(No *ini);

void insere(Fila *f, float v);

float retira(Fila *f);

int vazia(Fila *f);

int contador(Fila *f);

void imprime(Fila *f);