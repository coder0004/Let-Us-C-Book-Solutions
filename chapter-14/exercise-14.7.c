#include <stdio.h>

int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k, sum;
	
	//get elements of matrix 1.
	printf("\nEnter elements of 1st Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	
	//get elements of matrix 2.
	printf("\nEnter elements of 2nd Matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//printing the matrix 1.
	printf("\nMatrix entered by you are as follows:\n");
	printf("\nMatrix 1:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}
	
	//printing matrix 2.
	printf("\nMatrix 2:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	
	//calculating the multiplication.
	printf("\nMultiplication of Matrix 1 and Matrix 2:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum = 0;
			for(k=0; k<3; k++)
			{
				sum = sum + mat1[i][k] * mat2[k][j];
				mat3[i][j] = sum;
			}
		}
	}
	
	//printing the result of matrix 1 and matrix 2.
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
