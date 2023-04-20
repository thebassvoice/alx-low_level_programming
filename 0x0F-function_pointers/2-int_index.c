#include "function_pointers.h"
/**
 * int_index - Main function returns index
 * @array: pointer array argument
 * @size: argument
 * @cmp: pointer to compare values
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int search;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (search = 0; search < size; search++)
	{
		if (cmp(array[search]))
			return (search);
	}
	return (-1);
}
