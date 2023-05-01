#include "lists.h"
/**
 * add_nodeint_end - main add node function
 * @head: pointer argument
 * @n: const int parameter
 *
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest;
	listint_t *ptr = *head;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = latest;
	return (latest);
}
