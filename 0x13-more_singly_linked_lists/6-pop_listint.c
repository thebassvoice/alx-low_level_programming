#include "lists.h"
/**
 * pop_listint - main function
 * @head: pointer parameter
 *
 * Return: 0 or Number of nodes
 */
int pop_listint(listint_t **head)
{
	int nodesNum;
	listint_t *ptr;

	if (!head || !*head)
		return (0);
	nodesNum = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (nodesNum);
}
