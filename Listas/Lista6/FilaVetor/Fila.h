typedef struct fila Fila;

Fila *cria(void);

int vazia(Fila *f);

void insere(Fila *f, float v);

float retira(Fila *f);

void libera(Fila *f);

void imprime(Fila *f);

int contador(Fila *f);

void furaFila(Fila *f, float v);