#include "lists.h"
/**
 * free_listint_safe - function maain
 * @h: ptr to the ptr
 *
 * Return: emel
 */
size_t free_listint_safe(listint_t **h)
{
	size_t emel;
	int j;
	listint_t *ptr;

	emel = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			emel++;
		}
		else
		{
			free(*h);
			*h = NULL;
			emel++;
			break;
		}
	}
	*h = NULL;
	return (emel);
}
