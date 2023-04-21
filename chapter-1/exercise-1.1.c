#include<stdio.h>
int main()
{
	float fah,cen;
	printf("Enter the Temperature in Fahrenhiet Degree:");
	scanf("%f",&fah);
	cen=(5*(fah-32))/9;
	printf("The Temperature in Centigrade Degree:%f",cen);
	return 0;
}
