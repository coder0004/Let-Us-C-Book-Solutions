#include<stdio.h>
#include<math.h>
void sum_avg(int*, int*, double*);
int main()
{
	int sum, avg;
	double stdev;
	sum_avg(&sum, &avg, &stdev);
	printf("Sum:%d\nAverage:%d\nStandard Deviation:%lf", sum, avg, stdev);
	return 0;
}
void sum_avg(int *sum, int *avg, double *stdev)
{
	int n1, n2, n3, n4, n5;
	printf("Enter the 5 numbers:");
	scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
	*sum=n1+n2+n3+n4+n5;
	*avg=*sum/5;
	*stdev=sqrt((pow((n1-*avg),2.0)+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);
}
