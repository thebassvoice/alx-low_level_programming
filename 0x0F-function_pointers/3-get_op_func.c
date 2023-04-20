#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Function
 * @s: Argument
 *
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int el = 0;

	while (ops[el].op != NULL && *(ops[el].op) != *s)
		el++;

	return (ops[el].f);

