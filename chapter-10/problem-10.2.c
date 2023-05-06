#include<stdio.h>

void recur(int, int);

int main()
{
	int num, count = 2;
	
	printf("Enter the number:");
	scanf("%d", &num);
	
	printf("Prime factors:");
	
	recur(num, count);
	
	return 0;
}

void recur(int num, int count)
{
	if(count<=num)
	{
		if(num%count==0)
		{
			printf("%d ", count);
		    num = num / count;
		}
		else
		{
			count++;
		}
	    recur(num, count);
    }
}
