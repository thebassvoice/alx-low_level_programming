#include "main.h"

/**
 * print_rev - print in reverse
 * @s: character to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int emeldah;
	int count = 0;

	for (emeldah = 0; s[emeldah] != '\0'; emeldah++)
		count++;
	for (emeldah = count; emeldah >= 0; emeldah--)
		_putchar(s[emeldah]);
	_putchar('\n');
}
