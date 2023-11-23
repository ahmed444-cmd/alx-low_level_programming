#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - a func that transform the value of a bit to 0 with a known index
 * @n: value of the bit
 * @index: index
 * Return: 1 if success, -1 if error exists
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
