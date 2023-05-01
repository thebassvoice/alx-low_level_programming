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
	listint_t *temp;

	(void)temp;
	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = latest;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = latest;
	}
	return (*head);
}
