#include<stdio.h>
#include<math.h>
int main()
{
	int r,x,y;
	int dis,d;
	
	printf("Enter the radius of circle:");
	scanf("%d",&r);
	
	printf("Enter the co-ordinates(x,y) of point:");
	scanf("%d%d",&x,&y);
	
//	calculating the distances.
	dis=pow(x,2)+pow(y,2);
	d=pow(r,2);
	
	if(dis==d)
	{
		printf("Point lies on the circle.");
	}
	else
	{
		if(dis>d)
		    printf("Point lies outside the circle.");
	    else
	    	printf("Point lies inside the circle.");
	}
	return 0;
}
