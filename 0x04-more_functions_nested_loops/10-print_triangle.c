#include "main.h"
/**
 * print_triangle - main function prints a triangle
 * @size: argument
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, e;

		for (j = 1; j <= size; j++)
		{
			for (e = j; e < size; e++)
			{
				_putchar(' ');
			}

			for (e = 1; e <= j; e++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
