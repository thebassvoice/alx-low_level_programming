#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - main memory allocation function
 * @b: parameter argument
 *
 * Return: allocation
 */
void *malloc_checked(unsigned int b)
{
	void *allocation;

	allocation = malloc(b);
	if (allocation == NULL)
		exit(98);
	return (allocation);
}
