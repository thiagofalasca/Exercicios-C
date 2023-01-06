#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *mat1, **mat2, lin, col;

	printf("Entre com a quantidade linhas: ");
	scanf("%d", &lin);
	printf("Entre com a quantidade colunas: ");
	scanf("%d", &col);

	mat1 = (int *)malloc(sizeof(int) * lin * col);

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			mat1[i * col + j] = i + j;

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			printf("\nmat[%d] = mat[%d][%d] = %d", i * col + j, i, j, mat1[i * col + j]);

	printf("Entre com a quantidade linhas do segundo vetor: ");
	scanf("%d", &lin);
	printf("Entre com a quantidade colunas do segundo vetor: ");
	scanf("%d", &col);

	mat2 = (int **)malloc(lin * sizeof(int *));
	for (int i = 0; i < lin; i++)
		mat2[i] = (int *)malloc(col * sizeof(int));

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			mat2[i][j] = i + j;

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			printf("\nmat[%d][%d] = %d", i, j, mat2[i][j]);

	return 0;
}