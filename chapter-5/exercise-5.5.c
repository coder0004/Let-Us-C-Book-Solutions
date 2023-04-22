#include<stdio.h>
#include<math.h>
int main()
{
	int in, oct=0, num, rem, i=0, temp;
	
	printf("Enter the integer : ");
	scanf("%d", &in);
	temp = in;
	
	while(in > 0){
		rem = in%8;
		oct = oct+rem*pow(10,i); // main operation
		in = in/8;
		i++;
	}
	
	printf("The octal of %d is : %d", temp, oct);
	return 0;
}
