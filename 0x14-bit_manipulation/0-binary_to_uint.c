#include "main.h"
/**
 * binary_to_uint - main binary function
 * @b: argument parameter
 *
 * Return: not signed int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j, bin;
	unsigned int convert;

	if (!b)
		return (0);
	convert = 0;
	for (j = 0; b[j] != '\0'; j++)
		;
	for (j--, bin = 1; j >= 0; j--, bin *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] & 1)
		{
			convert += bin;
		}
	}
	return (convert);
}
