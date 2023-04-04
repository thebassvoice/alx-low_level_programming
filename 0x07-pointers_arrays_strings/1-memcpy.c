#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n:  bytes
 *
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int e = 0;
	int i = n;

	for (; e < i; e++)
	{
		dest[e] = src[e];
		n--;
	}
	return (dest);
}

