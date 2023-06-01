#include <stdio.h>

void modify(int *array, int size);

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("Original array:");
	
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	modify(arr, 10);    //or modify(&arr[0], 10);
	
	printf("\nNew array:");
	
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void modify(int *array, int size)
{
	for(int i=0; i<size; i++)
	{
		*array = *array*3;
		*array++;
	}
}
