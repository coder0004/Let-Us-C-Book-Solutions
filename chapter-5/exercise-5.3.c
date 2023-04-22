#include<stdio.h>
int main()
{
	int m=21, c, p;
	
	while(1)
	{
		
	printf("Number of matches left : %d\n", m);
	printf("Pick up matches from 1, 2, 3 & 4 : ");
	scanf("%d", &p);
	
	if(p>4 || p<1)
	continue;
		
	m=m-p;
	printf("Number of matches left : %d\n", m);
		
	c=5-p;
	printf("Out of which computer picked up : %d\n", c);
	
	m=m-c;
		
	if(m==1)
	{
		printf("Number of matches left : %d\n", m);
		printf("You lost the game!!\n");
	}
		
	}
	return 0;
}
