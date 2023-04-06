#include "main.h"
/**
 * _strlen_recursion - main functioon
 * @s: String parameter
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

