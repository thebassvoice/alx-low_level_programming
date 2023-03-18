#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int e;
	int p;

	j = 48;
	e = 48;
	p = 48;

	while (e < 58)
	{
		j = 48;
		while (j < 58)
		{
			p = 48;
			while (p < 58)
			{
				if (e != j && e != p && j != p && e < j && j < p)
				{
					putchar(e);
					putchar(j);
					putchar(p);
					if (j == 56 && e == 55 && p == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				p++;
			}
			j++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
