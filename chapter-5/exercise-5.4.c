#include <stdio.h>
#include<stdio.h>
int main()
{
	int num, pos, neg, zer;
	char ch;
	pos = neg = zer = 0;
	
while(1){	
	printf("Do you want to enter number (y/n) : ");
	scanf("%c", &ch);
	
	if(ch == 'n')
	break;
	
	if(ch == 'y')
	printf("Enter the number : ");
	scanf("%d", &num);
	
	if(num>0)
	pos++;
	
	if(num<0)
	neg++;
	
	if(num==0)
	zer++;
	
	fflush (stdin);
	
}
	printf("Positive Numbers : %d\nNegative Numbers : %d\nZeroes Numbers : %d", pos, neg, zer);

return 0;
}
