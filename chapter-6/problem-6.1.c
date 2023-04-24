#include<stdio.h>
int main()
{
	int n,i;
	
	printf("The prime numbers between 1 to 300 are as follows:-\n");
	
	for(i=1;i<=300;i++)
	{
		for(n=2;n<i;n++)
		{
			if(i%n==0)
			break;
		}
		if(n==i)
		printf("%d\t", i);
	}
	return 0;
}
