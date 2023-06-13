#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char olds[100], news[100];
	int pos, num, i;
	char *s, *t;
	
	printf("\nEnter a string:");
	gets(olds); //or scanf("%s", olds);
	
	printf("\nEnter position:");
	scanf("%d", &pos);
	
	printf("\nEnter No. of characters to extract:");
	scanf("%d", &num);
	
	s = olds;
	t = news;
	
	if(pos < 0 || pos > strlen(olds))
	{
		printf("\ninvalid inputs!");
		exit(1);
	}
	
	if(num<0)
	{
		num = 0;
	}
	
	if(num > strlen(olds))
	{
		num = num - strlen(olds) - 1;
	}
	
	s = s + pos;
	for(i=0; i<num; i++)
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
	printf("\nExtracted string:%s\n", news);
	
	return 0;
}
