#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Return: always 0
 */
int main(void)
{
	char j;

	for (j = 0 ; j <= 16 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
