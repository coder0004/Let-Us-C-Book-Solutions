#include<stdio.h>
int main()
{
	float wt, ht, bmi;
	
	printf("Enter the weight(kg) and height(m):");
	scanf("%f%f", &wt, &ht);
	
	bmi = wt/(ht*ht);
	
	if(bmi <15)
	printf("Starvation.");
	
	if(bmi > 15.1 && bmi < 17.5)
	printf("Anoretix.");
	
	if(bmi > 17.6 && bmi < 18.5)
	printf("Underweight.");
	
	if(bmi > 18.6 && bmi < 24.9)
	printf("Ideal");
	
	if(bmi > 25 && bmi < 25.9)
	printf("Overweight.");
	
	if(bmi > 30 && bmi < 30.9)
	printf("Morbidly Obese.");
	
	return 0;
}
