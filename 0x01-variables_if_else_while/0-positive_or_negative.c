#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - will assign a random number negative ,positive and zero
 * Return: Always 0 (Success)
 */ 
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n == 0)
{
 printf ("%d is zero\n",n); 
}
else if (n < 0)
{
printf ("%d is negative\n",n);
}
else
{
printf ("%d is positive\n",n);
}
return (0);
}
