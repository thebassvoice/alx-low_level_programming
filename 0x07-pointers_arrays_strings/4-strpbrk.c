#include "main.h"
/**
 * _strpbrk - main
 * @s: parameter
 * @accept: allows
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
		int e;

		while (*s)
		{
			for (e = 0; accept[e]; e++)
			{
			if (*s == accept[e])
			return (s);
			}
		s++;
		}

	return ('\0');
}

