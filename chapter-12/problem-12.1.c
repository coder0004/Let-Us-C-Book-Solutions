//Macros - SUPPER, SLOWER, SALPHA, BIG.

#include<stdio.h>

#define SUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define SLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define SALPHA(x) (SUPPER(x) || SLOWER(x))
#define BIG(x, y) (x > y ? x : y)

int main()
{
	char ch;
	int d, a, b;
	
	printf("Enter any character:");
	scanf("%c", &ch);
	
	if(SUPPER(ch) == 1)
	printf("You enetered a capital letter.\n\n");
	
	if(SLOWER(ch) == 1)
	printf("You entered a small character.\n\n");
	
	if(SALPHA(ch) != 1)
	printf("You entered a character other than alphabet.\n\n");
	
	printf("Enter any two numbers:");
	scanf("%d%d", &a, &b);
	
	d = BIG(a, b);
	
	printf("Bigger number is:%d", d);
	
	return 0;
} 
