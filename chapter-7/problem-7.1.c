#include<stdio.h>
#include<stdlib.h> //used for exit() function.
int main()
{
	while(1)
	{
		int fact, choice, num, i;
		
		printf("\n\n1 - To find factorial of a number.\n");
		printf("2 - To check number is prime number or not.\n");
		printf("3 - To find that number is odd or even.\n");
		printf("4 - To exit.\n");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice) // for multiple case control.
		{
			case 1:
				printf("Enter the number : ");
				scanf("%d", &num);
				fact=1;
				for(i=1;i<=num;i++)
				{
					fact=fact*i;
			    }
			    printf("Factorial : %d", fact);
			    break;
			    
			case 2:
				printf("Enter the number : ");
				scanf("%d", &num);
				for(i=2;i<num;i++)
				{
					if(num%i == 0)
						printf("Not a prime number.");
					if(num%i != 0)
					    printf("Prime number.");
					if(num == i)
					    printf("Prime number.");
					    break;
				}
				break;
			    
			case 3:
				printf("Enter the number : ");
				scanf("%d", &num);
				if(num%2 == 0)
				{
					printf("Even number.");
				}
				else
				printf("Odd number.");
				break;
				
			case 4:
			    exit(0);
				
			default:
    		printf("Wrong choice!");
		}		
	}
	return 0;
}
