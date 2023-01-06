/*
Aluno: Thiago Falasca Duarte
RA: a2350670
Turma: ES31-SO33A
Curso: Engenharia de Software
Matéria: Estrutura de Dados
*/
typedef struct lista Lista;

Lista *inicializa();

void imprimir(Lista *L);

Lista *insereFim(Lista *L, int v);

int contador(Lista *L);

Lista *libera(Lista *L);

Lista *intercala(Lista **L1, Lista **L2);

Lista *trocaPosicoes(Lista *L, int pos1, int pos2);