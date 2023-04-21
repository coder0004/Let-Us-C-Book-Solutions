#include<stdio.h>
int main()
{
	int c,d,e;
	printf("Enter the number at loaction C:");
	scanf("%d",&c);
	printf("Enter the number at loaction D:");
	scanf("%d",&d);
	e=c;
	c=d;
	d=e;
	printf("\nNew number at location C:%d",c);
	printf("\nNew number at location D:%d",d);
	return 0;
}
