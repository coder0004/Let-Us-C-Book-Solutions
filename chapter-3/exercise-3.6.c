#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,x3;
	int y1,y2,y3;
	int s1,s2,s3;
	
	printf("Enter the co-ordinates(x1,y1) of 1st point:");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter the co-ordinates(x2,y2) of 2st point:");
	scanf("%d%d",&x2,&y2);
	
	printf("Enter the co-ordinates(x3,y3) of 3st point:");
	scanf("%d%d",&x3,&y3);
	
//	calculate slop of line between each pairs of points.
    s1=abs(x2-x1)/abs(y2-y1);
    s2=abs(x3-x1)/abs(y3-y1);
    s3=abs(x3-x2)/abs(y3-y2);
    
    if(s1==s2 && s1==s3)
    printf("Points are co-linear.");
    else
    printf("points are not co-linear");
    return 0;
}
