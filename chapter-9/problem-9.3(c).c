#include<stdio.h>
#include<math.h>
int fact(int x);

int main()
{
    double x, sin_x=0, temp;
    int i, n, sign=-1;

    printf("Enter the value of x in radian: ");
    scanf("%lf", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    //functionality
    for(i=1; i<=n; i=i+2)
    {
        sign = -sign;
        temp = sign*pow(x,i) / fact(i);
        sin_x = temp + sin_x;
    }
    
    printf("Sin(%.2lf) Using Functionality: %lf", x, sin_x);
    
    printf("\nSin(%.2lf) Using Math.h: %lf", x, sin(x));
    
    return 0;
}

int fact(int n) // to calculate factorial.
{
    int i,fact=1;
    
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}
