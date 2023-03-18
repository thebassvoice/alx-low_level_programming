#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i, e, g, h, a, b;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				a = (h * 10) + g;
				b = (e * 10) + i;
				if (a < b)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}
