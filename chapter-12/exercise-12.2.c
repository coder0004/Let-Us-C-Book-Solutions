#include<stdio.h>

//macros.
#define MEAN(x,y) ((x+y)/2.0)
#define ABSO(x) (x<0 ? x*-1 : x)
#define CLOW(x) (x+32)
#define BIG(x,y,z) (x>y && x>z ? x:y>x && y>z ? y:z)

int main()
{
	int negative_num;
	int mean_num1, mean_num2, num1, num2, num3;
	int abs_val, up_to_low, biggest;
	char alph;
	float mean_val;
	
	printf("Enter any two number:");
	scanf("%d%d", &mean_num1, &mean_num2);
	mean_val = MEAN(mean_num1,mean_num2);
	printf("Arithmetic mean:%.1f\n", mean_val);
	
	printf("\n\nEnter any negative number:");
	scanf("%d", &negative_num);
	abs_val = ABSO(negative_num);
	printf("Absolute value:%d\n", abs_val);
	fflush(stdin);
	
	printf("\n\nEnter any uppercase letter:");
	scanf("%c", &alph);
	up_to_low = CLOW(alph);
	printf("Lower letter:%c\n", up_to_low);
	
	printf("\n\nEnter 3-numbers:");
	scanf("%d%d%d", &num1, &num2, &num3);
	biggest = BIG(num1,num2,num3);
	printf("Biggest:%d\n", biggest);
	
	return 0;
}
