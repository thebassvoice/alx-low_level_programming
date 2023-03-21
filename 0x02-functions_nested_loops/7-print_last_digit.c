#include "main.h"
/**
 * print_last_digit - prints whatever
 *
 * @n: another parameter
 * Return: return always 0
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
