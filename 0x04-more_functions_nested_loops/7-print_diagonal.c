#include "main.h"

/**
 * print_diagonal - main function
 * @n: parameter
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int emeldah, josh;

		for (emeldah = 0; emeldah < n; emeldah++)
		{
			for (josh = 0; josh < n; josh++)
			{
				if (josh == emeldah)
					_putchar('\\');
				else if (josh < emeldah)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
