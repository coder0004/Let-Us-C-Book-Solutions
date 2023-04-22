#include<stdio.h>
#include<math.h>

float armstrong(int);

int main()
{
    int count;

    for(count = 1; count <= 500; count++)
    {
        if(count == armstrong(count))
        {
            printf("%d is a Armstrong number\n", count);
        }
    }

    return 0;
}

float armstrong(int num)
{
    int rem;
    float sum = 0.0;

    while(num)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    return(sum);
}

