#include <stdio.h>
int main()
{
    int yr;

    printf("Enter the year:");
    scanf("%d", &yr);

    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) //logical operations applied.
    {
        printf("Year is Leap year.");
    }
    else
        printf("Year is not a Leap year.");

    return 0;
}