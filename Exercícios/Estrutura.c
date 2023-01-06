#include <stdio.h>
#include <string.h>

typedef struct
{
    int h;
    int m;
    int s;
} Hora;

typedef struct
{
    char placa[8];
    char marca[20];
    Hora entrada;
    Hora saida;
} Estacionamento;

int main()
{
    Estacionamento e1, e2;
    strcpy(e1.placa, "AAA0000");
    strcpy(e1.marca, "Porshe");
    e1.entrada.h = 10;
    e1.entrada.m = 30;
    e1.entrada.s = 20;
    e1.saida.h = 12;
    e1.saida.m = 10;
    e1.saida.m = 30;

    e2 = (Estacionamento){"BBB1111", "Ferrari", 11, 10, 11, 12, 15, 05};

    printf("%s\t%s\t%d:%d:%d\t%d:%d:%d\n", e2.placa, e2.marca,
           e2.entrada.h, e2.entrada.m, e2.entrada.s, e2.saida.h, e2.saida.m, e2.saida.s);

    return 0;
}