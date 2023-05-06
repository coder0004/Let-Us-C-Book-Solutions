#include<stdio.h>

void fibo(int, int, int);

int main()
{
	int old=1, current=1;
	
	printf("%d\t%d\t", old, current);
	
	fibo(old, current, 23);
	
	return 0;
}

void fibo(int old, int current, int terms)
{
	int newterm;
	
	if(terms>=1)
	{
		newterm = old + current;
		printf("%d\t", newterm);
		terms = terms - 1;
		fibo(current, newterm, terms);
	}
	
}
