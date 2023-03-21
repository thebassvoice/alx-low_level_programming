#include "main.h"
/**
 * _isalpha - checks for alpha characters
 *
 * @c: parameter
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) && (c > 96 && c <= 122))
		return (1);
	else
		return (0);
}
