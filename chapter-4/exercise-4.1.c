#include<stdio.h>
int main()
{
	int s1,s2,s3,a,b,c;
	
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&s1,&s2,&s3);
	
    //	for right angle triangle.
    a = (s1*s1) == (s2*s2) + (s3*s3);
    b = (s2*s2) == (s1*s1) + (s3*s3);
	c = (s3*s3) == (s2*s2) + (s1*s1);
	
    //	Two sises are equal in isosceles.
	if(s1 == s2 && s2 != s3 || s1 == s3 && s2 != s3 || s2 == s3 && s3 !=s1)
	printf("Triangle is a isosceles triangle.\n");
	
    //	All sides are equal in equilateral.
	if(s1 == s2 && s2 == s3)
	printf("Triangle is a equilateral triangle.\n");
	
    //	No sides are equal in scalene.
	if(s1 != s2 && s2 != s3 && s3 != s1)
	printf("Triangle is a scalene triangle.\n");
	
    //	By using pythagorean theorem.
	if (a || b || c)
	printf("Triangle is a Right angle triangle.\n");
	
	return 0;
}
