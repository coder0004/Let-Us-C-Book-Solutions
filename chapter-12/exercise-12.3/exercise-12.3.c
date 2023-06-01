#include<stdio.h>
#include"intrest.h"
int main()
{
	int p, t;
	float r, si, amt;
	
	printf("Enter principal, no. of years and rate of intrest:");
	scanf("%d%d%f", &p, &t, &r);
	
    //	si = p*r*t/100.
    si = SIM_INT(p,t,r);
	printf("Simple interest:%.2f\n", si);
	
    //	amount = principal+si.
    amt = AMT(p,si);
	printf("Amount:%.2f\n", amt);
	
	return 0;
}
