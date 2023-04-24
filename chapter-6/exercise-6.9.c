#include<stdio.h>
int main()
{
	int i, j, k, l, sp=3, d=1;
	for(i=1;i<=4;i++) //loop for rows.
	{	
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
	    {
			printf("%d ", d);
			d++;
		}
		sp--;
		printf("\n");
	}
	return 0;
}
