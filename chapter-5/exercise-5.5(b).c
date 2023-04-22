#include<stdio.h>
int main()
{
	int remainnum, firstnum, set,ran, sma, big;
	
	printf("Enter the total number are in a set : ");
	scanf("%d", &set);
	
	printf("Enter the numbers:");
	scanf("%d", &firstnum);
	set=set-1;
	big=sma=firstnum;
	
	while(set)
	{
		printf("Enter the numbers:");
		scanf("%d", &remainnum);
		
		if(remainnum>big)
		big=remainnum;
		
		if(remainnum<sma)
		sma=remainnum;
		
		set--;
	}
	ran=big-sma;
	printf("Range of the set : %d", ran);
	return 0;
}
