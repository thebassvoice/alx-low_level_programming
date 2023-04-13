#include <stdlib.h>
#include "main.h"

/**
 * *_memset - main memset
 * @s: argument 
 * @b: character argument
 * @n: unsigned int
 *
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int inn;

	for (inn = 0; inn < n; inn++)
	{
		s[inn] = b;
	}
	return (s);
}

/**
 * *_calloc - Main function
 * @nmemb: parameter
 * @size: parameter
 *
 * Return: Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r == NULL)
		return (NULL);

	_memset(r, 0, nmemb * size);

	return (r);
}
