#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float baset, alturat, raiocc, ladocb, raiocl, alturacl;

    printf("Diga a medida da base do triangulo:\n");
    scanf("%f", &baset);
    printf("Diga a altura do triangulo\n");
    scanf("%f", &alturat);
    printf("Diga o raio do circulo\n");
    scanf("%f", &raiocc);
    printf("diga o medida do lado do cubo\n");
    scanf("%f", &ladocb);
    printf("Diga o raio do cilindro\n");
    scanf("%f", &raiocl);
    printf("Diga a altura do cilindro\n");
    scanf("%f", &alturacl);

    alturat = alturat * baset / 2;
    raiocc = 2 * PI * raiocc;
    ladocb = 6 * pow(ladocb, 2);
    raiocl = 2 * PI * raiocl * alturacl;

    printf("A area do triangulo e: %0.2f \n A area do circulo e: %0.2f \n A area do cubo e: %0.2f \n A area do cilindro e: %0.2f\n", alturat, raiocc, ladocb, raiocl);

    return 0;
}