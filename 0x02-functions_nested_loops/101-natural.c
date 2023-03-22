#include <stdio.h>

/**
 * main - Prints natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int e, j;

	for (e = 1; e < 1024; e++)
	{
		if ((e % 3) == 0 || (e % 5) == 0)
			j += e;
	}
	printf("%d\n", j);
	return (0);
}
