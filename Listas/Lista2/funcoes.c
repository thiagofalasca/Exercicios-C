/*
Aluno: Thiago Falasca Duarte
RA: a2350670
Turma: ES31-SO33A
Curso: Engenharia de Software
Matéria: Estrutura de Dados
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"
#include <conio.h>

struct end
{
    char rua[30];
    char bairro[30];
    int numero;
    char complemento[30];
    int cep;
    char cidade[30];
    char estado[30];
    char pais[30];
};

struct nasc
{
    int dia;
    int mes;
    int ano;
};

struct tel
{
    int ddd;
    int numero;
};

struct lista
{
    double cpf;
    char nome[32];
    char email[30];
    Endereco end;
    Nascimento nasc;
    Telefone tel;
    char observacoes[30];
    struct lista *prox;
};

void imprimir(Lista *L)
{
    Lista *aux = L;
    printf("\n");
    while (aux != NULL)
    {
        printf("\nCPF: %.0f", aux->cpf);
        printf("\nNome: %s", aux->nome);
        printf("\n");
        aux = aux->prox;
    }
}

Lista *inicializa()
{
    return NULL;
}

void buscaCPF(Lista *L, double cpf)
{
    Lista *aux = L;
    while (aux != NULL && aux->cpf != cpf)
    {
        aux = aux->prox;
    }
    if (aux == NULL)
        printf("CPF nao encontrado!\n");
    else
        printf("O nome da pessoa e: %s\n", aux->nome);
}

void buscaNome(Lista *L, char nome[])
{
    Lista *aux = L;
    char p[strlen(nome) + 2];
    char q[strlen(nome) + 2];
    int count = 0;
    strcpy(q, nome);
    q[strlen(nome)] = ' ';
    q[strlen(nome) + 1] = '\0';
    while (aux != NULL)
    {
        strncpy(p, aux->nome, strlen(nome) + 1);
        p[strlen(nome) + 1] = '\0';
        if (!strcmp(p, q))
        {
            printf("\nPessoas encontradas");
            printf("\nCPF: %.0f", aux->cpf);
            printf("\nNome: %s\n", aux->nome);
            count++;
        }
        aux = aux->prox;
    }
    if (count == 0)
        printf("\nNome nao encontrado!\n");
}

Lista *insere(Lista *L)
{
    Lista *novo, *aux = L;
    novo = (Lista *)malloc(sizeof(Lista));
    printf("\nDIGITE O CPF: ");
    scanf("%lf", &novo->cpf);
    printf("DIGITE O NOME: ");
    fflush(stdin);
    scanf("%[^\n]", novo->nome);
    strcat(novo->nome, " ");
    printf("DIGITE O EMAIL: ");
    fflush(stdin);
    scanf("%[^\n]", novo->email);
    printf("DIGITE A RUA: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.rua);
    printf("DIGITE O BAIRRO: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.bairro);
    printf("DIGITE O COMPLEMENTO: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.complemento);
    printf("DIGITE O NUMERO: ");
    fflush(stdin);
    scanf("%d", &novo->end.numero);
    printf("DIGITE O CEP: ");
    fflush(stdin);
    scanf("%d", &novo->end.cep);
    printf("DIGITE A CIDADE: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.cidade);
    printf("DIGITE O ESTADO: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.estado);
    printf("DIGITE O PAIS: ");
    fflush(stdin);
    scanf("%[^\n]", novo->end.pais);
    printf("DIGITE SUA DATA DE NASCIMENTO (DD MM AAAA):");
    fflush(stdin);
    scanf("%d%d%d", &novo->nasc.dia, &novo->nasc.mes, &novo->nasc.ano);
    printf("DIGITE SEU NUMERO DE TELEFONE (DDD TEL):");
    fflush(stdin);
    scanf("%d%d", &novo->tel.ddd, &novo->tel.numero);
    printf("DIGITE AS OBSERVACOES: ");
    fflush(stdin);
    scanf("%[^\n]", novo->observacoes);
    novo->prox = NULL;
    if (L != NULL)
    {
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        return L;
    }
    else
        return novo;
}

Lista *retirar(Lista *L, double cpf)
{
    Lista *aux = L, *ant = NULL;
    while (aux != NULL && aux->cpf != cpf)
    {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == NULL)
    {
        printf("\nCPF nao encontrado!\n");
        return L;
    }

    if (ant == NULL)
        L = aux->prox;
    else
        ant->prox = aux->prox;

    free(aux);
    return L;
}

Lista *alterar(Lista *L, double cpf)
{
    Lista *aux = L, *ant = NULL, *novo;
    while (aux != NULL && aux->cpf != cpf)
    {
        ant = aux;
        aux = aux->prox;
    }
    if (aux == NULL)
    {
        printf("\nCPF nao encontrado!\n");
        return L;
    }
    novo = insere(NULL);
    if (ant == NULL)
    {
        L = novo;
        novo->prox = aux->prox;
    }
    else
    {
        ant->prox = novo;
        novo->prox = aux->prox;
    }
    free(aux);
    return L;
}

void *aniversariantes(Lista *L, int mes)
{
    Lista *aux = L;
    int count = 0;
    while (aux != NULL)
    {
        if (aux->nasc.mes == mes)
        {
            if (count == 0)
                printf("\n\tLista de aniversariantes\n");
            printf("\nCPF: %.0f", aux->cpf);
            printf("\nNome: %s", aux->nome);
            count++;
        }
        aux = aux->prox;
    }
    if (count == 0)
        printf("\nNenhum aniversariante encontrado!\n");
}