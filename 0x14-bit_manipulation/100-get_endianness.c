#include "main.h"

/**
 * get_endianness - function that gets the endianness
 * Return: 0 if endian is bigger , 1 if endian is little
*/

int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
