#include "lists.h"

/**
 * listint_len - main function
 * @h: pointer
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
