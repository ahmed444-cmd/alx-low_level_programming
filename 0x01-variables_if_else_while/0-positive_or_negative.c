#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/** main - will assign a random number to the variable
 *  n each time it is executed. Complete the source code
 *   in order to print whether the number stored in the
 *   variable n is positive or negative.
 *   return : 0
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n==0)
	{
	   printf ("%d is zero",n); 
	}
	else if (n<0)
	{
	printf ("%d is negative",n);
	}
	else
	{
	printf ("%d is positive",n);
	}
	    
	
	return (0);
}