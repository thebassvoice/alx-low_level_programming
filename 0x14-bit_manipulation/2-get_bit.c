#include "main.h"
/**
 * get_bit - main funnction
 * @n: int argument
 * @index: index parameter
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (n == 0 && index < 64)
		return (0);
	for (value = 0; value <= 63; n >>= 1, value++)
	{
		if (index == value)
		{
			return (n & 1);
		}
	}
	return (-1);
}
