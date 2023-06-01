// Insertion sort.

#include <stdio.h>
int main()
{
	int n, i, j;
	
	printf("How many elements:");
	scanf("%d", &n);
	
	int  arr[n];
	
	printf("Enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=1; i<n; i++)
	{
		int current = arr[i];            //second element
		int j = i-1;                     //first element.
		while(arr[j]>current && j>=0)
		{
			arr[j+1] = arr[j];
			j--;    
		}
		arr[j+1] = current;
	}
	printf("Sorted array:");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
