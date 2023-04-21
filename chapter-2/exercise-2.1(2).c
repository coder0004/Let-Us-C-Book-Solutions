#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	printf("Enter any five-digit number:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	printf("The sum of its digits:%d",sum);
	return 0;
}
