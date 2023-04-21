#include<stdio.h>
#include<math.h>
int main()
{
	float lat1,lon1,lat2,lon2,dis;
	printf("Enter the latitude and longitude of first place:");
	scanf("%f%f",&lat1,&lon1);
	printf("Enter the latitude and longitude of second place:");
	scanf("%f%f",&lat2,&lon2);
	dis=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(lon2-lon1));
	printf("Distance between first place and second place:%f",dis);
	return 0;
}
