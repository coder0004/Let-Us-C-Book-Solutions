#include <stdio.h>

int main()
{
	int x[3][5]=
	{
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15}
	}, *n=&x[0][0];
	
	printf("1.  *(*(x+2)+1)  :  %d\n", *(*(x+2)+1));
	printf("2.  *(*x+2)+5    :  %d\n", *(*x+2)+5);
	printf("3.  *(*(x+1))    :  %d\n", *(*(x+1)));
	printf("4.  *(*(x)+2)+1  :  %d\n", *(*(x)+2)+1);
	printf("5.  *(*(x+1)+3)  :  %d\n", *(*(x+1)+3));
	printf("6.  *n           :  %d\n", *n);
	printf("7.  *(n+2)       :  %d\n", *(n+2));
	printf("8.  (*(n+3)+1)   :  %d\n", (*(n+3)+1));
	printf("9.  *(n+5)+1     :  %d\n", *(n+5)+1);
	printf("10. ++*n         :  %d\n", ++*n);
	
	return 0;
}