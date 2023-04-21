#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;
	printf("Enter the marks of five subjects:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	aggr=m1+m2+m3+m4+m5;
	per=aggr/5;
	printf("\nAggregriate Marks:%d",aggr);
	printf("\nPercentage Marks:%f",per);
	return 0;
}
