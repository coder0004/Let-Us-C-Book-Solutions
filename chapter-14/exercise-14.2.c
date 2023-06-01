#include <stdio.h>

int main()
{
	int i, j=25;
	int *pi, *pj=&j;
	/*more lines of program*/
	*pj=j+5;
	j=*pj+5;
	pj=pj;
	*pi=i+j;
	
	printf("1.  &i      : %d", &i);
	printf("2.  &j      : %d", &j);
	printf("3.  pj      : %d", pj);
	printf("4.  *pj     : %d", *pj);
	printf("5.  i       : %d", i);
	printf("6.  pi      : %d", pi);
	printf("7.  *pi     : %d", *pi);
	printf("8.  (pi+2)  : %d", (pi+2));
	printf("9.  (*pi+2) : %d", (*pi+2));
	printf("10. *(pi+2) : %d", *(pi+2));
	
	return 0;
}
