#include<stdio.h>
int main()
{
	int len,bre,are,per;
	printf("Enter the lenght and breath:");
	scanf("%d%d",&len,&bre);
	are=len*bre;
	per=2*(len+bre);
	if(are>per)
	printf("Area is greater than perimeter.");
	else
	printf("Perimeter is greater than area.");
	return 0;
}
