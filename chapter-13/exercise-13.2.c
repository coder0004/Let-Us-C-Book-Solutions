#include <stdio.h>
int main()
{
	int arr[10], i;
	
	printf("Enter 10 elements of array:");
	for(i=0; i<=9; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<=9; i++)
	{
		printf("arr[%d] and arr[%d] are ", i, 10-(i+1));
		
		if(arr[i] == arr[10-(i+1)])
		printf("Equal\n");
		
		else
		printf("Unequal\n");
	}
	
	return 0;
}
