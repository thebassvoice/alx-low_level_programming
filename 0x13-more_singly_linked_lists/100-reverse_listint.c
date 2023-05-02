#include "lists.h"
/**
 * reverse_listint - main function
 * @head: ptr to the ptr
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *backward;

	backward = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = next;
	}
	*head = backward;
	return (*head);
}
