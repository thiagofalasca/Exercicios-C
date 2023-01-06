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

Lista *separa(Lista *L, int v);

Lista *concatena(Lista *L, Lista *L2);

Lista *constroi(int n, int *vet);

Lista *retira_prefixo(Lista* l, int n);