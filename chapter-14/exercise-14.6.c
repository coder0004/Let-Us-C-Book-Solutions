#include <stdio.h>

int main()
{
	int mat1[6][6], mat2[6][6], mat3[6][6], i, j;
	
	//taking elements of matrix 1 from user.
	printf("\nEnter elements of 1st Matrix:\n");
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	
	//taking elements of matrix 2 from user.
	printf("\nEnter elements of 2nd Matrix:\n");
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//printing the matrix 1.
	printf("\nMatrix entered by you are as follows:\n");
	printf("\nMatrix 1:\n");
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}
	
	//printing matrix 2.
	printf("\nMatrix 2:\n");
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	
	//calculating the sum.
	printf("\nSum of Matrix 1 and Matrix 2:\n");
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	//printing the sum of matrix 1 and matrix 2.
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("%d\t", mat3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
