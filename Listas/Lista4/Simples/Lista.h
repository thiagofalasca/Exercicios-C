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

int contaRecursiva(Lista *L);

int contaIterativa(Lista *L);

void verificaLista(Lista *L);

void comparaListas(Lista *L1, Lista *L2);

Lista *trocaPosicoes(Lista *L, int pos1, int pos2);