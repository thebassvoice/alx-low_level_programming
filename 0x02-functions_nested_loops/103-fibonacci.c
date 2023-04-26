#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int e;
	unsigned long int l, c, after, sum;

	l = 1;
	c = 2;
	sum = 0;
	for (e = 1; e <= 33; ++e)
	{
		if (l < 4000000 && (l % 2) == 0)
		{
			sum = sum + l;
		}
		after = l + c;
		l = c;
		c = after;
	}
	printf("%lu\n", sum);
	return (0);
}
