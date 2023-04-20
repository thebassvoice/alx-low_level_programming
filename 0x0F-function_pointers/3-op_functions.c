#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum of two numbers.
 * @a: Argument 1
 * @b: Argument 2
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction
 * @a: Argument 1
 * @b: Argument 2
 * Return: Subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Product
 * @a: Argument 1
 * @b: Argument 2
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: Argument 1
 * @b: Argument 2
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function
 * @a: Argument 1
 * @b: Argument 2
 *
 * Return: Argument a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
