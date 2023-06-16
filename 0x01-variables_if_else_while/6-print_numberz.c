#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 using putchar starting
* from 0 followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 48; x < 58; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
