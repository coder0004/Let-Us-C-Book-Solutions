#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30], str2[30], target[30];
    char lastname[20]; char *p, *token;
    int count, i, j;
	
	printf ("\nEnter name, middle name and surname:\n");
	gets (str1);
	
	strcpy (str2, str1);
	count = 0;
	token = strtok (str1, "");
	
	while (token != NULL)
	{
	    count++;
        token = strtok (NULL, "");
    }
    
	j = 0;
	i = 0;
	p = strtok (str2, "");
	
	while (p != NULL)
	{
	    if (i == count - 1)
        {
            strcpy (lastname, p);
            target[j] = '\0';
        }
        else
        {
            target[j] = *p;
            j++;
            target[j] = '.';
            j++;
        }
        i++;
        p = strtok (NULL, "");
    }
    
    strcat (target, lastname);
    printf ("%s\n", target);
    
	return 0;
}
