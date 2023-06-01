#include <stdio.h>

int main()
{
	unsigned int arr[3][3]=
	{
	{2,4,6},
	{9,1,10},
	{16,64,5}
	};
	
	printf("1.  **arr                       :  %d\n", **arr);
	printf("2.  **arr<*(*arr+2)             :  %d\n", **arr<*(*arr+2));
	printf("3.  *(*arr+2)/(*(*arr+1)>**arr) :  %d\n", *(*arr+2)/(*(*arr+1)>**arr));
	printf("4.  *(arr[1]+1)|arr[1][2]       :  %d\n", *(arr[1]+1)|arr[1][2]);
	printf("5.  *(arr[0])|*(arr[2])         :  %d\n", *(arr[0])|*(arr[2]));
	printf("6.  arr[1][1]<arr[0][1]         :  %d\n", arr[1][1]<arr[0][1]);
	printf("7.  arr[2][[1]&arr[2][0]        :  %d\n", arr[2][1]&arr[2][0]);
	printf("8.  arr[2][2]|arr[0][1]         :  %d\n", arr[2][2]|arr[0][1]);
	printf("9.  arr[0][1]^arr[0][2]         :  %d\n", arr[0][1]^arr[0][2]);
	printf("10. ++**arr+--arr[1][1]         :  %d\n", ++**arr+--arr[1][1]);
	
	return 0;
}
