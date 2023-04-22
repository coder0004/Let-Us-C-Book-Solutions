#include<stdio.h>
int main()
{
	int n,a,b,num;
	long int revnum=0;
	printf("Enter a five-digit number:");
	scanf("%d",&n);
	num=n;
	a=n%10;//5th digit
	n=n/10;//remaining digits
	revnum=revnum+a*10000;
	a=n%10;//4th digit
	n=n/10;//remainig digits
	revnum=revnum+a*1000;
	a=n%10;//3rd digit
	n=n/10;//remaining digits
	revnum=revnum+a*100;
	a=n%10;//2nd digit
	n=n/10;//remaining digits
	revnum=revnum+a*10;
	a=n%10;//1st digit
	revnum=revnum+a;
	if(revnum==num)
		printf("Entered number is equal to Reversed number.");
	else
		printf("Entered number is not equal to Reversed number.");
	return 0;
}
