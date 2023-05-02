#include "lists.h"
/**
 * reverse_listint - main function
 * @head: ptr to the ptr
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward;
	listint_t *backward;

	backward = NULL;
	forward = NULL;

	while (*head)
	{
		forward = (*head)->forward;
		(*head)->forward = backward;
		backward = *head;
		*head = forward;
	}
	*head = backward;
	return (*head);
}
