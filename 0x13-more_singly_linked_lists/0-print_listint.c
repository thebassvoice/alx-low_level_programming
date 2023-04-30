#include "lists.h"

/**
 * print_listint - main prints the elements of a list
 * @h: link pointer
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes;

	numNodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->num);
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
