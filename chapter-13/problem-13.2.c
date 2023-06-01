#include<stdio.h>
int main()
{
	int arr1[5], arr2[5], i, j; //defined the size of arrays.
	
	printf("Enter 5 elements of array:");
	for(i=0;i<=4;i++)
	scanf("%d", &arr1[i]);
	
	for(i=0,j=4;i<=4;i++,j--) //for reverse the elements.
	arr2[j] = arr1[i];
	
	printf("Elements in reverse order:");
	for(i=0;i<=4;i++)
	printf("%d ", arr2[i]);
	
	return 0;
}
