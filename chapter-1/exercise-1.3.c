#include<stdio.h>
int main()
{
	int a0ht,a0wd,a1ht,a1wd,a2ht,a2wd,a3ht,a3wd,a4ht,a4wd,
	a5ht,a5wd,a6ht,a6wd,a7ht,a7wd,a8ht,a8wd;
	a0ht=1189;a0wd=841;
	printf("Size of paper A0 - Height:%d , Width:%d\n",a0ht,a0wd);
	a1ht=841;a1wd=a0ht/2;
	printf("Size of paper A1 - Height:%d , Width:%d\n",a1ht,a1wd);
    a2ht=a1wd;a2wd=a1ht/2;
    printf("Size of paper A2 - Height:%d , Width:%d\n",a2ht,a2wd);
    a3ht=a2wd;a3wd=a2ht/2;
    printf("Size of paper A3 - Height:%d , Width:%d\n",a3ht,a3wd);
    a4ht=a3wd;a4wd=a3ht/2;
    printf("Size of paper A4 - Height:%d , Width:%d\n",a4ht,a4wd);
    a5ht=a4wd;a5wd=a4ht/2;
    printf("Size of paper A5 - Height:%d , Width:%d\n",a5ht,a5wd);
    a6ht=a5wd;a6wd=a5ht/2;
    printf("Size of paper A6 - Height:%d , Width:%d\n",a6ht,a6wd);
    a7ht= a6wd;a7wd=a6ht/2;
    printf("Size of paper A7 - Height:%d , Width:%d\n",a7ht,a7wd);
    a8ht=a7wd;a8wd=a7ht/2;
    printf("Size of paper A8 - Height:%d , Width:%d\n",a8ht,a8wd);
    return 0;
}
