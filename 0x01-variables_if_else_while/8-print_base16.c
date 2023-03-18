#include <stdio.h>
/**
 * main - base 16 numbers
 *
 * Return: always 0
 */
int main(void)
{
	char e;
	int j;

	for (j = 0 ; j <= 9 ; j++)
		putchar(j + '0');
	for (e = 'a' ; e <= 'f' ; e++)
		putchar(e);
	putchar('\n');
	return (0);
}
