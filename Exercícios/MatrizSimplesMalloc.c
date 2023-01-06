#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mat, i, j, lin, col;

    printf("Entre com a quantidade linhas: ");
    scanf("%d", &lin);
    printf("Entre com a quantidade colunas: ");
    scanf("%d", &col);

    mat = (int *)malloc(sizeof(int) * lin * col);

    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            mat[i * col + j] = i + j;

    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            printf("\nmat[%d] = mat[%d][%d] = %d", i * col + j, i, j, mat[i * col + j]);

    return 0;
}