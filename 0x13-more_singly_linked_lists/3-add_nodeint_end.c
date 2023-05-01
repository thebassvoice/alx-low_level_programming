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
	listint_t *ptr;

	(void)ptr;
	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = latest;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = latest;
	}
	return (*head);
}
