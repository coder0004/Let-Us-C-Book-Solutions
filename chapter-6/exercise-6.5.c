#include<stdio.h>
int main()
{
	
	for(int i=1;i<=30;i++)
	{
		for(int j=1;j<=30;j++)
		{
			for(int k=1;k<=30;k++)
			{
				if(i*i+j*j==k*k)
				{
					printf("Sides : %d, %d, %d.\n", i, j, k);
				}
			}
		}
	}
	return 0;
}
