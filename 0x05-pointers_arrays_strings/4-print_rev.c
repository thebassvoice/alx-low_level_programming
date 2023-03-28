#include "main.h"

/**
 * print_rev - print in reverse
 * @s: character to be printed
 * Return: always 0
 */
void print_rev(char *s)
{
	int e;
	int count = 0;

	for (e = 0 ; s[e] != '\0' ; e++)
		count++;
	for (e = count ; e >= 0 ; e--)
		_putchar(s[e]);
	_putchar('\n');
}
