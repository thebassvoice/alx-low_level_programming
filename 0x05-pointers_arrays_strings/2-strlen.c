#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: parameter length print
 * Return: void
 */
int _strlen(char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
		j++;
	return (j);
}
