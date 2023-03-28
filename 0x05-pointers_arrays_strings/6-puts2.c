#include "main.h"
/**
 * puts2 - increament
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int e;

	for (e = 0 ; str[e] != '\0' ; e++)
	{
		_putchar(str[e]);
		e++;
	}
	_putchar('\n');
}
