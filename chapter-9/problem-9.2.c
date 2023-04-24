#include<stdio.h>
void avg_per(int, int, int, float*, float*);
int main()
{
	int n1, n2, n3;
	float avg, per;
	printf("Enter the numbers of 5 subjects:");
	scanf("%d%d%d", &n1, &n2, &n3);
	avg_per(n1, n2, n3, &avg, &per);
	printf("Average:%f\nPercentage:%f", avg, per);
	return 0;
}
void avg_per(int n1, int n2, int n3, float *avg, float *per)
{
	int total=n1+n2+n3;
	*avg=total/3.0;
	*per=(total/300.0)*100.0;
}
