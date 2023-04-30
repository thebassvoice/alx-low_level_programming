#include "lists.h"
/**
 * add_nodeint - main function
 * @head: head pointer
 * @n: argument
 *
 * Return: NULL or pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (!latest)
	{
		return (NULL);
	}
	latest->n = n;
	latest->next = *head;
	*head = latest;
	return (latest);
}
