#include<stdio.h>
int main()
{
	float red,green,blue;
	float cyan,white,black,magenta,yellow;
	float max;
	
	printf("Enter the Red, Green, Blue value(0 to 255):");
	scanf("%f%f%f",&red, &green, &blue);
	
	if(red == 0 && green == 0 && blue == 0)
	{
		cyan = magenta = yellow = 0;
	    black = 1;
	}
	else
	{
		red = red/255;
		green = green/255;
		blue = blue/255;
		
		max = red;
		if(green > max)
		max = green;
		if(blue > max)
		max = blue;
		
		white = max;
		cyan = (white - red)/white;
		magenta = (white - green)/white;
		yellow = (white - blue)/white;
		black = (1-white);
	}
	printf("The CMYK Format : %f %f %f %f\n", cyan, magenta, yellow, black);
	return 0;
}
