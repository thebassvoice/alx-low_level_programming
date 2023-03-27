#include "main.h"

/**
 * swap_int - swaps values
 *
 * @a: int a
 * @b: int b
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
