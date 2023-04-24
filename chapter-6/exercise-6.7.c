#include<stdio.h>
#include<math.h>
int main()
{
	int num1, num2, i, j, k, l;
	
	for(i=1;i<=30;i++)
	{
		for(j=1;j<=30;j++)
		{
			num1=pow(i,3)+pow(j,3);
			
			
			for(k=1;k<=30;k++)
	        {
		        for(l=1;l<=30;l++)
		        {
			        num2=pow(k,3)+pow(l,3);
			        
			        
			        if(num1==num2)
	                {
		                if(i!=k && j!=l && i!=l && j!=k && i!=j && k!=l)
		                {
			                printf("%d, %d and %d, %d\n", i, j, k, l);
		                }
	                }
		        }
	        }
	    }
    }
	return 0;
}
