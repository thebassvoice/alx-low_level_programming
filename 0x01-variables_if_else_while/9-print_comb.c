#include <stdio.h>
/**
 * main - prints possible combinations
 *
 * Return: always 0
 */
int main(void)
{
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		putchar(j + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
