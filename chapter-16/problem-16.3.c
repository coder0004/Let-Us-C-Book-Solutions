#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	int i, l;
	char *s[] = {
	"To ere is human...",
	"But to really mess things up...",
	"One needs to know C!!"};
	
	char *p;
	
	l = strlen(s[i]);
	
	for (i=0; i<3; i++)
	{
		p = (char*) malloc(sizeof(l+1));
		strcpy(p, s[i]);
		strrev(p);
		s[i] = p;
		puts(s[i]);
	}
	
	return 0;
}
