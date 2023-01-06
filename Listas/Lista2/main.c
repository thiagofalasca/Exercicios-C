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

int main()
{

    Lista *L = inicializa();
    char nome[30];
    int controle = 1;
    double n = 0;

    do
    {
        printf("\n\tESCOLHA UMA OPCAO:\n\n");
        printf("1. Inserir nova pessoa\n");
        printf("2. Retirar pessoa\n");
        printf("3. Editar pessoa\n");
        printf("4. Busca por CPF\n");
        printf("5. Busca por nome\n");
        printf("6. Aniversariantes do mes\n");
        printf("7. Imprimir lista\n");
        printf("0. Sair\n");
        fflush(stdin);
        scanf("%d", &controle);
        system("cls");

        switch (controle)
        {
        case 1:
            L = insere(L);
            break;

        case 2:
            printf("\nDigite o CPF da pessoa que voce deseja retirar: ");
            scanf("%lf", &n);
            L = retirar(L, n);
            break;

        case 3:
            printf("\nDigite o CPF da pessoa que voce deseja editar: ");
            scanf("%lf", &n);
            L = alterar(L, n);
            break;

        case 4:
            printf("\nDigite o CPF da pessoa que voce deseja saber o nome: ");
            scanf("%lf", &n);
            buscaCPF(L, n);
            break;

        case 5:
            printf("\nDigite o nome de quem deseja saber o CPF: ");
            fflush(stdin);
            scanf("%s", nome);
            buscaNome(L, nome);
            break;

        case 6:
            printf("\nDigite o mes para saber os aniversariantes: ");
            scanf("%d", &n);
            aniversariantes(L, n);
            break;

        case 7:
            imprimir(L);
            break;

        default:
            printf("Digite uma opcao valida\n");
        }
    } while (controle);

    return 0;
}