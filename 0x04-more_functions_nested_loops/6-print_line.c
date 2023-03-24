#include "main.h"

/**
 * print_line - prints a straight line in the terminal.
 * @n: underscore parameter
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < n; j++)
	_putchar('_');
	_putchar('\n');
}

