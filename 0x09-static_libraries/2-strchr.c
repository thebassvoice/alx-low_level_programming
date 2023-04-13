#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int josh = 0;

	for (; s[josh] >= '\0'; josh++)
	{
		if (s[josh] == c)
			return (&s[josh]);
	}
	return (0);
}
