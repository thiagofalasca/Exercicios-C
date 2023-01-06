#include <stdio.h>

typedef struct
{
    int cpf;
    float altura;
    float peso;
    char nome[60];
} Pessoa;

int main()
{
    int aux, cpf;
    float imc;

    printf("Defina a quantidade de pessoas: ");
    scanf("%d", &aux);

    Pessoa a[aux];

    for (int i = 0; i < aux; i++)
    {
        printf("\nDigite aos dados da pessoa %d a seguir: \n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        gets(a[i].nome);

        printf("\nCPF: ");
        fflush(stdin);
        scanf("%d", &a[i].cpf);

        printf("\nPeso: ");
        fflush(stdin);
        scanf("%f", &a[i].peso);

        printf("\nAltura: ");
        fflush(stdin);
        scanf("%f", &a[i].altura);
    }

    printf("\nDigite o CPF da pessoa que deseja saber o IMC: ");
    scanf("%d", &cpf);

    for (int i = 0; i < aux; i++)
    {
        if (a[i].cpf == cpf)
        {
            imc = a[i].peso / (a[i].altura * a[i].altura);
            printf("\nO IMC de %s e %.2f", a[i].nome, imc);
        }
    }
    return 0;
}