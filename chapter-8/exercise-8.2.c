#include<stdio.h>
void prime_factor(int);
int main()
{
	int num;
	printf("Enter any number:");
	scanf("%d", &num);
	printf("All Prime Factors of %d are:", num);
	prime_factor(num);
	return 0;
}
void prime_factor(int num)
{
	int i;
	for(i=2;num>1;i++)
	{
		while(num%i==0)
		{
			printf("%d ", i);
			num=num/i;
		}
	}
}
