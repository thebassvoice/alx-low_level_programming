#include "main.h"
/**
 * _strspn - Entry point
 * @s: parameter
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int emeldah;

	while (*s)
	{
		for (emeldah = 0; accept[emeldah]; emeldah++)
		{
			if (*s == accept[emeldah])
			{
				n++;
				break;
			}
			else if (accept[emeldah + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

