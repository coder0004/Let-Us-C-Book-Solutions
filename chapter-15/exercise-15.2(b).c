#include <stdio.h>

int main()
{
    char str[11];
    int i, j=2, sum=0;
    
    printf ("Enter 10 digit ISBN number:");
    scanf ("%s", str);
    
    
    for (i = 8; i >= 0; i--)
    {
        sum = sum + (str [i] - 48) * j;  // '0' = in ASCII Value.
        j++;
    }
    
    for (i = 0; i <= 9; i++)
    {
        if ((sum + i) % 11 == 0)
        break;
    }
    
    if (i == str[9] - '0')  // '0' = 48 in ASCII Value.
        printf ("ISBN Number is verified & found to be correct\n");
    else
        printf ("Checksum error in ISBN Number\n");
        
    return 0;
}
