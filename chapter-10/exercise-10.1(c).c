#include<stdio.h>

int non_rec_bin(int num);
int rec_bin(int num);

void main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Decimal To Binary Using Recursion: %d", rec_bin(num));
    printf("\nDecimal To Binary Without Using Recursion: %d", non_rec_bin(num));
}

int non_rec_bin(int num)
{
    int x, res=0, pos=1;
    while (num!=0)
    {
        x = num%2;
        res = res + (x*pos);
        pos = 10*pos;
        num = num/2;
    }
    return res;
}

int rec_bin(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return ((num%2)+10*rec_bin(num/2));
    }
}
