#include <stdio.h>

int main()
{
	int arr1[4][4], arr2[4][4], i, j;
	
	printf("\nEnter matrix element:\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("\nMatrix:\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	
	printf("\nTranspose matrix:\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
