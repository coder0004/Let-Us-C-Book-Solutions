#include<stdio.h>
int main()
{
	int c, fsub;
	printf("Enter the class and failed subjects : ");
	scanf("%d%d", &c, &fsub);
	
	switch(c)
	{
		case 1:
		
		if(fsub <= 3)
		printf("Student gets total of %d grace marks.\n", 5*fsub);
		
		else
		printf("Student does not get any grace marks.\n");
		break;
		
		case 2:
		
		if(fsub <= 2)
		printf("Student gets total of %d grace marks.\n", 4*fsub);
		
		else
		printf("Student does not get any grace marks.\n");
		break;
		
		case 3:
		
		if(fsub <= 1)
		printf("Student gets total of 5 grace marks.\n");
		
		else
		printf("Student does not get any grace marks.\n");
		break;
	}
	return 0;
}
