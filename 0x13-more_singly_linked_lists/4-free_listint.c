#include "lists.h"
/**
 * free_listint - main linked list free
 * @head: pointer parameter
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		freelist(head);
		head = ptr;
	}
}
