#include<stdio.h>
int main()
{
	int arr[] = {9,7,4,6,5,3,5,7,5,1};
	int n, i, count = 0;
	
	printf("Enter any number:");
	scanf("%d", &n);
	for(i=0;i<=9;i++)
	{
		if(n==arr[i])
		{
			count++;
		}
	}
	printf("Number %d is found %d times.", n, count);
	
	return 0;
}
