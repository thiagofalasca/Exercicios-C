#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat, i, j, lin, col;

    printf("Entre com a quantidade linhas: ");
    scanf("%d", &lin);
    printf("Entre com a quantidade colunas: ");
    scanf("%d", &col);

    mat = (int **)malloc(lin * sizeof(int *));
    for (i = 0; i < lin; i++)
        mat[i] = (int *)malloc(col * sizeof(int));

    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            mat[i][j] = i + j;

    for (i = 0; i < lin; i++)
        for (j = 0; j < col; j++)
            printf("\nmat[%d][%d] = %d", i, j, mat[i][j]);

    return 0;
}