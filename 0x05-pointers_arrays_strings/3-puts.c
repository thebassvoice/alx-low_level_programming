#include "main.h"

/**
 * _puts - prints string
 * @str: string character
 * Return: void
 */
void _puts(char *str)
{
	int emeldah;

	for (emeldah = 0; str[emeldah] != '\0' ; emeldah++)
		_putchar(str[emeldah]);
	_putchar('\n');
}
