#include "main.h"
/**
 * _isupper - Checks for characters
 *@c: Character to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
