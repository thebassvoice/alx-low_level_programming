#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int digit1, digit2;
	char *funcop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	digit1 = atoi(argv[1]);
	funcop = argv[2];
	digit2 = atoi(argv[3]);
	if (get_op_func(funcop) == NULL || funcop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*funcop == '/' && digit2 == 0) ||
	    (*funcop == '%' && digit2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(funcop)(digit1, digit2));
	return (0);
}
