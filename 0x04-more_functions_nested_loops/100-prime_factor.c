#include <stdio.h>
#include <math.h>
/**
 * main - funtion
 *
 * Return: Always
 */
int main(void)
{
	long int in;
	long int highest;
	long int e;

	in = 612852475143;
	highest = -1;

	while (in % 2 == 0)
	{
		highest = 2;
		in /= 2;
	}
	for (e = 3; e <= sqrt(in); e = e + 2)
	{
		while (in % e == 0)
		{
			highest = e;
			in = in / e;
		}
	}
	if (in > 2)
		highest = in;
	printf("%ld\n", highest);
	return (0);
}
