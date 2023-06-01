#include<stdio.h>
int main()
{
	int arr[]={19,15,8,1,4,1,12,9,58,44};
	int i,t;
	
	for(i=0;i<=9;i=i+2)   //i=i+2 for taking third value after two.
	{
		t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
	}
	
	for(i=0;i<=9;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
