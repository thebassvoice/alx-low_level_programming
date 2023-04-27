#include "lists.h"
/**
 * list_len - Main function
 * @h: linked list
 * Return: Elements
 */

size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfElements++;
	}
	return (numberOfElements);
}
