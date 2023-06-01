#include <stdio.h>

int main()
{
	int arr1[3][3], arr2[3][3], i, j, count=0;
	
	printf("\nEnter elements of matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("\nMatrix formed as follows:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%2d", arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			arr2[i][j] = arr1[j][i];
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%2d", arr2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(arr1[i][j] != arr2[i][j])
			{
				count=1;
				break;
			}
		}
	}
	
	if(count==0)
	{
		printf("\nMatrix is symmetric.\n");
	}
	else
	{
		printf("\nMatrix is not symmetric.\n");
	}
	
	return 0;
}
