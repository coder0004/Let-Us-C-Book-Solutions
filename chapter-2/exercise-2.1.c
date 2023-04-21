#include<stdio.h>
int main()
{
	int n,num,a,sum=0;
	printf("Enter the five-digit number:");
	scanf("%d",&num);
	a=num%10;//5th digit extracted as remainder.
	n=num/10;//remaining digits.
	sum=sum+a;//sum updating by adding extracted digits.
	a=n%10;//4th digit again.
	n=n/10;
	sum=sum+a;
	a=n%10;//3rd digit again.
	n=n/10;
	sum=sum+a;
	a=n%10;//2nd digit again.
	n=n/10;
	sum=sum+a;
	a=n%10;//1st digit again.
	n=n/10;
	sum=sum+a;
	printf("The sum of its didgits:%d",sum);
	return 0;
}
