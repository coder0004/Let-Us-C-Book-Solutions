#include<stdio.h>
int main()
{
	float bp,da,hra,grpay;
	printf("\nEnter the Basic pay of Ramesh:");
	scanf("%f",&bp);
	da=(bp*40)/100;//or (da=0.4*bp;)
	hra=(bp*20)/100;//or (hra=0.2*bp;)
	grpay=bp+da+hra;
	printf("\nGross pay of Ramesh:%f",grpay);
	return 0;
}
