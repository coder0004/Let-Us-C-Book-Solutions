#include<stdio.h>
int main()
{
	int num, i, pos=0, neg=0, even=0, odd=0;
	int arr[25];
	
	printf("Enter any 25 numbers:");
	for(i=0; i<=24; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<=24; i++)
	{
		if(arr[i] > 0)  //or (arr[i] > 0 ? pos++ : (neg++)).
			pos++;
			
		else
			neg++;
		
		
		if(arr[i]%2 == 0)  // or (arr[i]%2 == 0 ? even++ : (odd++)).
			even++;
			
		else
			odd++;
	}
	
	printf("Positive numbers:%d\n", pos);
	printf("Negative numbers:%d\n", neg);
	printf("Even numbers:%d\n", even);
	printf("Odd numbers:%d\n", odd);
	
	return 0;
}
