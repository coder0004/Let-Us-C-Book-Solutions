#include<stdio.h>
int main()
{
	float otpay;
	int hr;
	
	printf("Enter number of hours worked:");
	scanf("%d", &hr);
	
	for(int i = 0; i <= 10; i++)
	{
	if(hr > 40)
	otpay = (hr - 40)*12;
	else
	otpay = 0;
    }
    printf("Hours:%d\n Overtime pay:%f", hr, otpay);
    return 0;
}
