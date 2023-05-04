#include "main.h"
/**
 * flip_bits - main function
 * @n: parameter
 * @m: parameter
 *
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int emel, num;
	unsigned long int latest;
	unsigned long int flip;

	num = 0;
	flip = n ^ m;

	for (emel = 63; emel >= 0; emel--)
	{
		latest = flip >> emel;
		if (latest & 1)
			num++;
	}
	return (num);
}
