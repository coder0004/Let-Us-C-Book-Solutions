#include<stdio.h>
#include<math.h>

float are(float, float, float);
float dis(float, float, float, float);
int position(float, float, float, float);
void res(float, float, float, float, float, float, float, float, float*, float*);

int main()
{
	float x1, x2, x3, y1, y2, y3, x, y, dis;
	float area=0, rvalue=0;
	
	printf("x1, y1:");
	scanf("%f%f", &x1, &y1);
	
	printf("x2, y2:");
	scanf("%f%f", &x2, &y2);
	
	printf("x3, y3:");
	scanf("%f%f", &x3, &y3);
	
	printf("x, y:");
	scanf("%f%f", &x, &y);
	
	res(x1, y1, x2, y2, x3, y3, x, y, &area, &rvalue);
	
	if(rvalue==1)
	printf("Point(%.2f, %.2f) lies inside the triangle.", x, y);
			
	else
	printf("Point(%.2f, %.2f) lies outside the triangle.", x, y);
	
	return 0;
}

void res(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y, float *area, float *rvalue)
{
	float a, b, c, d, e, f, A, B, C;
	
	a = dis(x1, y1, x2, y2);
	b = dis(x2, y2, x, y);
	c = dis(x3, y3, x1, y1);
	
	*area = are(a, b, c);
	
	d = dis(x1, y1, x, y);
	e = dis(x2, y2, x, y);
	f = dis(x3, y3, x, y);
	
	A = are(a, c, d);
	B = are(b, f, e);
	C = are(c, d, f);
	
	*rvalue = position(*area, A, B, C);
}

float dis(float x1, float y1, float x2, float y2)
{
	return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

float are(float a, float b, float c)
{
	float s, ar;
	
	s = (a+b+c)/2.0;
	ar = sqrt(s*(s-a)*(s-b)*(s-c));
	return(ar);
}

int position(float area, float A, float B, float C)
{
	int rev;
	
	rev = area-(A+B+C);
	
	if(rev==0 || rev<0.0001)
	return(1);
	else
	return(0);
}
