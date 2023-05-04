#include "main.h"
/**
 * clear_bit - main function
 * @n: ptr
 * @index: index parameter
 *
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);
	bit = 1 << index;
	if (*n & bit)
		*n ^= bit;
	return (1);
}
