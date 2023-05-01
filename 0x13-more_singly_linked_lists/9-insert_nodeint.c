#include "lists.h"
/**
 * insert_nodeint_at_index - main function
 * @head: pointer to a pointer
 * @idx: unsigned int argument
 * @n: integer parameter
 *
 * Return: Address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int emel;
	listint_t *latest;
	listint_t *j = *head;

	if (idx != 0)
	{
		for (emel = 0; emel < idx - 1 && j != NULL; emel++)
		{
			j = j->next;
		}
	}
	if (j == NULL && idx != 0)
		return (NULL);
	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
	}
	else
	{
		latest->next = j->next;
		j->next = latest;
	}
	return (latest);
}
