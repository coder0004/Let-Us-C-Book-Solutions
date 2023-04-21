#include<stdio.h>
int main()
{
	float len,bre,rad,peri,arear,circum,areac;
	printf("\nEnter the lenght and breath:");
	scanf("%f %f",&len,&bre);
	printf("\nEnter the radius:");
	scanf("%f",&rad);
	arear=len*bre;//Area of rectangle 
	peri=2*(len+bre);//perimeter of rectangle
	areac=(22*rad*rad)/7;//Area of circle
	circum=(22*2*rad)/7;//Circumfrence of circle
	printf("\nThe area and perimeter of rectangular:%f %f",arear,peri);
	printf("\nThe area and circumfrence of circle:%f %f",areac,circum);
	return 0;
}
