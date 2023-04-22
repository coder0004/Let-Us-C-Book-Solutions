#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the co-ordinates of point:");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0)
	{
		printf("point lies on Origin.");
	}
	else
	{
		if(x==0 && y!=0)
		{
			printf("point lies on Y-axis.");
		}
		else
		{
			if(x!=0 && y==0)
			{
				printf("point lies on X-axis.");
			}
			else
			{
				printf("point neither lies on any axis, nor origin.");
			}
		}
	}
	return 0;
}
