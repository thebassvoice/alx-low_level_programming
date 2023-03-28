#include "main.h"

/**
 * print_rev - print in reverse
 * @s: character to be printed
 * Return: always 0
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (j -= 1;  j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
