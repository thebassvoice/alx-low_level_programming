#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int yep;

	for (yep = 1; yep <= 100; yep++)
	{
		if (yep % 3 == 0 && yep % 5 != 0)
		{
			printf(" Fizz");
		} else if (yep % 5 == 0 && yep % 3 != 0)
		{
			printf(" Buzz");
		} else if (yep % 3 == 0 && yep % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (yep == 1)
		{
			printf("%d", yep);
		} else
		{
			printf(" %d", yep);
		}
	}
	printf("\n");
	return (0);
}
