#include<stdio.h>

long int bin(long int);
long int bin_recur(long int);

int main()
{
	long int num;
	
	printf("Enter the number:");
	scanf("%ld", &num);
	
	bin(num);
	printf("Binary without using recursion:%ld\n", bin(num));
    
    bin_recur(num);
	printf("Binary using recursion:%ld", bin_recur(num));
	
	return 0;
}

long int bin(long int num)
{
	long int pos = 1, bin = 0, rem = 0;
	
	while(num != 0)
	{
        rem = num % 2; 
        num = num / 2;               //	or	num /= 2;  
		bin = bin + (rem * pos);     //	or	bin += (rem * pos);   
        pos = pos * 10;              //	or	pos *= 10;              
	}
	return(bin);
}

long int bin_recur(long int num)
{
	long int rem = 0, bin = 0, pos = 1;
	
	if(num == 0)
	{
		return 0;
	}
	else
	{
		rem = num % 2;
		num = num / 2;                //	or	num /= 2;
		pos = bin_recur(num) * 10;    // By recursion.
		bin = rem + pos;
		return (bin);
	}
}
