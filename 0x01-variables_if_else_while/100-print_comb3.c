#include <stdio.h>
/**
 * main - Prints numbers  00 and 89
 *
 * Return: Always 0
 */
int main(void)
{
	int j;
	int e;

	j = 48;
	e = 48;

	while (e < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (e != j && e < j)
			{
				putchar(e);
				putchar(j);
				if (j == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
