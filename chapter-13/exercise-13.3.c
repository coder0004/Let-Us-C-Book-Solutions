#include <stdio.h>

#define N 5 //  N = 5 by using macro.

int main()
{
    int a[N], i, *small;
  
    printf("Enter %d integer numbers:", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
  
    small = &a[0];
  
    for(i = 1; i < N; i++)
    {  
        if(*(a + i) < *small)
            *small = *(a + i);
    }
  
    printf("Smallest element in array:%d\n", *small);
  
    return 0;
}
