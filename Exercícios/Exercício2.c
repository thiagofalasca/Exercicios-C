#include <stdio.h>
#include <stdlib.h>

struct Funcionario
{
    int codigo;
    int horas_t;
    float valor_h;
};

int main()
{
    struct Funcionario *funcionario;
    float salario;

    funcionario = (struct Funcionario *)malloc(sizeof(struct Funcionario));

    printf("Digite o codigo do funcionario: ");
    scanf("%d", &funcionario->codigo);
    printf("Digite as horas trabalhadas do funcionario: ");
    scanf("%d", &funcionario->horas_t);
    printf("Digite o valor da hora do funcionario: ");
    scanf("%f", &funcionario->valor_h);

    salario = (funcionario->horas_t) * (funcionario->valor_h);

    printf("Codigo do funcionario: %d", funcionario->codigo);
    printf("\nSalario do funcionario: %.2f", salario);

    free(funcionario);

    return 0;
}