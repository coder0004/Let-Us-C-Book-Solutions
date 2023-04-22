#include<stdio.h>
int main()
{
	float  har, ten, car;
	
	printf("Enter the Hardness:");
	scanf("%f", &har);
	
	printf("Enter the Carbon Content:");
	scanf("%f", &car);
	
	printf("Enter the Tensile Strength:");
	scanf("%f", &ten);
	
	if(har > 50 && car < 0.7 && ten > 5600)
	printf("Grade is 10.");
	
	else if(har > 50 && car < 0.7)
	printf("Grade is 9.");
	
	else if(car < 0.7 && ten > 5600)
	printf("Grade is 8.");
	
	else if(har > 50 && ten > 5600)
	printf("Grade is 7.");
	
	else if(har > 50 || car < 0.7 || ten > 5600)
	printf("Grade is 6.");
	
	else
	printf("Grade is 5.");
	
	return 0;
}
