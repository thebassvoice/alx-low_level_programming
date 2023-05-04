#include "main.h"
/**
 * get_endianness - main function
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *jm;

	e = 1;
	jm = (char *) &e;

	return ((int)*jm);
}
