/*
Aluno: Thiago Falasca Duarte
RA: a2350670
Turma: ES31-SO33A
Curso: Engenharia de Software
Matéria: Estrutura de Dados
*/
typedef struct end Endereco;

typedef struct nasc Nascimento;

typedef struct tel Telefone;

typedef struct lista Lista;

void imprimir(Lista *L);

Lista *inicializa();

void buscaCPF(Lista *L, double cpf);

void buscaNome(Lista *L, char nome[]);

Lista *insere(Lista *L);

Lista *retirar(Lista *L, double cpf);

Lista *alterar(Lista *L, double cpf);

void *aniversariantes(Lista *L, int mes);