#include "main.h"

/**
 * binary_to_uint - func that converts a base2 number to an unsigned int.
 * @b: pointer to a string containing a base2 number
 *
 * Return: unsigned int with decimal value of base2 number, or 0 if error
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
