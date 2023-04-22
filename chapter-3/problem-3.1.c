#include<stdio.h>
int main()
{
	float cp,sp,profit,loss;
	printf("Enter the cost price and selling price:");
	scanf("%f%f",&cp,&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(sp>cp)
	{
		printf("Seller made a profit of Rs:%f",profit);
	}
	if(cp>sp)
	{
		printf("Seller made a loss of Rs:%f",loss);
	}
	if(sp==cp)
	{
		printf("There is no profit ,no loss");
	}
	return 0;
}
