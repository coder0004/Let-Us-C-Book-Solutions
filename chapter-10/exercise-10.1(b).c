// Online C compiler to run C program online
#include <stdio.h>

int binary(int);

int main() 
{
int num;
printf ("Enter the number:");
scanf ("%d", &num);
binary (num); /* Function call */
return 0;
}

/* function to convert decimal to binary */
int binary (int n)
{
int r;
r = n % 2;
n = n / 2;
if (n == 0)
{
printf ("\nThe binary equivalent is %d", r);
return (r);
}
else
binary (n); /* Recursive call */
printf ("%d", r);
}
