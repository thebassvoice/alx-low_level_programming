#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0, len2 = 0;
	char *p, *result;

	if (s1)
	{
		while (s1[len1])
			len1++;
	}
	if (s2)
	{
		while (s2[len2])
			len2++;
	}
	result = s1;
	p = s1 + len1;
	if (s2)
	{
		while (*s2)
		{
			*p++ = *s2++;
		}
	}
	*p = '\0';
	return result;
}
