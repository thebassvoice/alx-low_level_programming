#include "main.h"

/**
 * more_numbers - Prints numbers
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int e;
	int j;

	for (e = 0; e < 10; e++)
	{
	for (j = 0; j < 15; j++)
	{
		if (j >= 10)
			_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
	}
	_putchar('\n');
	}
}
