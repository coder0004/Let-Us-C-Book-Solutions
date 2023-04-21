#include<stdio.h>
#include<math.h>
int main()
{
	float s1,s2,s3,sp,area;
	printf("Enter the sides(s1,s2,s3) of Triangle:");
	scanf("%f %f %f",&s1,&s2,&s3);
	sp=(s1+s2+s3)/2;
	area=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
	printf("The Area of the Triangle:%f",area);
	return 0;
}
