#include "lists.h"
/**
 * delete_nodeint_at_index - main function
 * @head: pointer to the ptr
 * @index: int argument
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now = NULL;
	listint_t *ptr = *head;
	unsigned int j;

	j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (j < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		j++;
	}
	now = ptr->next;
	ptr->next = now->next;
	free(now);
	return (1);
}
