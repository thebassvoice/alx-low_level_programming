#include "lists.h"
/**
 * print_list - main function
 * @h: link parameter
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t numberOfElements;

	numberOfElements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numberOfElements++;
	}
	return (numberOfElements);
}
