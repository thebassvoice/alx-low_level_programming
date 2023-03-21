#include "main.h"
/**
 * print_alphabet_x10 - Prints alpha ten times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char e;
	int j;

	for (j = 1 ; j <= 10 ; j++)
	{
		for (e = 'a' ; e <= 'z' ; e++)
			_putchar(e);
		_putchar('\n');
	}
}

