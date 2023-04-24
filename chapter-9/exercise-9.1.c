#include<stdio.h>

void cir_shift(int*, int*, int*);

int main()
{
	int x, y, z;
	
	printf("Values before circular shift:\n");
	
	printf(" x=");
	scanf("%d", &x);
	
	printf(" y=");
	scanf("%d", &y);
	
	printf(" z=");
	scanf("%d", &z);
	
	cir_shift(&x, &y, &z);
	
	printf("Values after circular shift:\n");
	
	printf(" x=%d\n", x);
	printf(" y=%d\n", y);
	printf(" z=%d\n", z);
	
	return 0;
}
void cir_shift(int *a, int *b, int *c)
{
	int temp;
	
	temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
}
