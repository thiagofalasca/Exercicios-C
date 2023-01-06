typedef struct fila Fila;

Fila *cria(void);

int vazia(Fila *f);

void insere(Fila *f, float v, char d[10]);

float retira(Fila *f);

void libera(Fila *f);

void imprime(Fila *f);