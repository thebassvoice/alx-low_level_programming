#include "main.h"
/**
 * _islower - checks lowercase letters
 *
 * @c: parameter
 * Return: always 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
