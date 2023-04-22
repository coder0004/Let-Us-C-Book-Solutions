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
    int rem, n = 0, temp;
    float sum = 0.0;

    temp = num;

    while(temp)
    {
        temp = temp / 10;
        n++;
    }

    while(num)
    {
        rem = num % 10;
        sum = sum + pow(rem, n);
        num = num / 10;
    }

    return(sum);
}

