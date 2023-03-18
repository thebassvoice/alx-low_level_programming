#include <stdio.h>
/**
 * main - prints possible combinations
 *
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		if (j == 9)
			putchar(j + '0');
		else
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
