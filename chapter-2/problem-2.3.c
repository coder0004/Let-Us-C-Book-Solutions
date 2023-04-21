#include<stdio.h>
int main()
{
	int amount,noone,notwo,nofive,noten,nofifty,nohun,total;
	printf("Enter the Amount:");
	scanf("%d",&amount);
	amount=amount/1;
	noone=amount%1;
	amount=amount/2;
	notwo=amount%2;
	amount=amount/5;
	nofive=amount%5;
	amount=amount/10;
	noten=amount%10;
	amount=amount/50;
	nofifty=amount%50;
	amount=amount/100;
	nohun=amount%100;
	total=nohun+nofifty+noten+nofive+notwo+noone;
	printf("Smallest Number of notes:%d",total);
	return 0;
}
