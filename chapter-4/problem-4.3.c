#include<stdio.h>
int main()
{
	int s1,s2,s3,sum,largeside;
	printf("Enter the three sides of a triangle:");
	scanf("%d%d%d", &s1, &s2, &s3);
	if(s1 > s2 && s1 > s3)
	{
		sum = s2+s3; largeside = s1;
	}
    else if(s2 > s1 && s2 > s3)
	{
		sum = s1+s3; largeside = s2;
	}
	else if(s3 > s1 && s3 > s2)
	{
		sum = s2+s3; largeside = s3;
	}
	if(sum > largeside)
	printf("Triangle is Valid.");
	else
	printf("Triangle is not Valid.");
	
	return 0;
}
