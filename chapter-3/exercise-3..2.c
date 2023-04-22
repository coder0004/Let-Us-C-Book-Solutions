#include<stdio.h>
int main()
{
	int ram,shyam,ajay;
	printf("Enter the age of Ram,Shyam and Ajay:");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	if(ram<ajay)
	{
		if(ram<shyam)
			printf("Ram is youngest.");
		else
			printf("Shyam is youngest.");
    }
	else
	{
		if(ajay<shyam)
			printf("Ajay is youngest.");
		else
			printf("shyam is youngest.");
	}
	return 0;
}
