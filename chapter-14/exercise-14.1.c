#include <stdio.h>

int main()
{
	int theed[3][2][3]=
	{
		{{2,3,5}, {3,5,3}},
		{{2,7,9}, {3,7,1}},
		{{8,2,3}, {1,4,2}}
	};
	printf("\nInitialization of 3D array:\n\n");
	printf("int theed[3][2][3]=\n{\n{{2,3,5}, {3,5,3}},\n{{2,7,9}, {3,7,1}},\n{{8,2,3}, {1,4,2}}\n};");

	return 0;
}

/* The first element of the array is arr[0][0][0] or **arr .
   The last element of the array is arr[2][1][2] or 
   (((arr + 2) + 1)+ 2) . */
