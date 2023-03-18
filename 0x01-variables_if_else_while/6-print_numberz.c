#include <stdio.h>
/**
 * main - Prints base 10 numbers
 *
 * Return: always 0
 */
int main(void)
{
	int e;

	for (e = 0 ; e <= 9 ; e++)
	putchar(e + '0');
	putchar('\n');
	return (0);
}
