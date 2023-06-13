#include<stdio.h>
#include<conio.h>
int main()
{
	char isbn[15];
	int i, sum = 0;
	printf("\nEnter 10 digit ISBN number : ");
	gets(isbn);
	for (i = 0; i <= 9; i++)
	{
		isbn[i] -= 48;  // Converting characters into numerals.
		sum = sum + ((i + 1)*isbn[i]);  // calculating the sum.
	}
	if (sum % 11)  // If not divisble by 11.
		puts("\nISBN number is wrong.");
	else
		puts("\nISBN number is valid.");
	return 0;
}
