typedef struct no No;

typedef struct fila Fila;

Fila *cria(void);

No *ins_fim(No *fim, float v, char n[10]);

No *ret_ini(No *ini);

void insere(Fila *f, float v, char n[10]);

int vazia(Fila *f);

float retira(Fila *f);

void libera(Fila *f);

int contador(Fila *f);

void imprime(Fila *f);

void imprimePrim(Fila *f);