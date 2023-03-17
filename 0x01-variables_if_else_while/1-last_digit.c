#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d\n", n);
	if (n > 5)
		printf("and is greater than 5 %d\n", n);
	else if (n == 0)
		printf("and is 0 %d\n", n);
	else
		printf("and is less than 6 and not 0 %d\n", n);
	return (0);
}
