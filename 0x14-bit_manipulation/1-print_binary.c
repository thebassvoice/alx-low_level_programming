#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_binary - main function
 * @n: parameter
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bin, j;
	unsigned long int latest;

	j = 0;

	for (bin = 63; bin >= 0; bin--)
	{
		latest = n >> bin;
		if (latest & 1)
		{
			putchar('1');
			j++;
		}
		else if (j)
			putchar('0');
	}
	if (!j)
		putchar('0');
}
