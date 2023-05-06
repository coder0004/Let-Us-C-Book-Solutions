/* Tower of Hanoi. */

#include<stdio.h>

void move(int, char, char, char);

int main()
{
    int n = 4; // Numbers of Disks. 

    move(n, 'A', 'C', 'B'); // Names of rods.
	
	return 0;
}

void move(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
    	printf ("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
	}
	
    else
    {
    	move (n - 1, from_rod, aux_rod, to_rod);
        printf ("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
        move (n - 1, aux_rod, to_rod, from_rod);
    }
}
