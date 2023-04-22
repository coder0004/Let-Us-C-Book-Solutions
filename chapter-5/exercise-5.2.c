#include<stdio.h>
int main()
{
    int i = 1, a, b, c;
    printf ("Armstrong numbers between 1 & 500 are:\n");
    while (i <= 500)
    {
        a = i % 10; /* extract last digit */
        b = i % 100;
        b = (b - a) / 10; /* extract second digit */
        c = i / 100; /* extract first digit */
        if ((a * a * a) + (b * b * b) + (c * c * c) == i)
        printf ("%d\n", i);
        i++;
    }
return 0;
}
