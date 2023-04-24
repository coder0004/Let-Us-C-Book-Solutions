#include<stdio.h>
int main()
{
	for(int i=0;i<=24;i++)
	{
		if(i==0)
		{
			printf("Time : %d - Midnight.\n\n", i);
		}
		
		if(i>=1 && i<12)
		{
			printf("Time : %d - AM.\n\n", i);
		}
		
		if(i==12)
		{
			printf("Time : %d - Noon.\n\n", i);
		}
		
		if(i>12 && i<=23)
		{
			printf("Time : %d - PM.\n\n", i);
		}
	}
	return 0;
}
