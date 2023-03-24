#include "main.h"

/**
 * print_line - prints a straight line in the terminal.
 * @n: underscore parameter
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

