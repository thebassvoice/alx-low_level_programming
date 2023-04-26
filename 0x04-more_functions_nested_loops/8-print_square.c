#include "main.h"

/**
 * print_square - main function
 * @size: parameter
 *
 * Return: nothing
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int e, in;

		for (e = 0; e < size; e++)
		{
			for (in = 0; in < size; in++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
