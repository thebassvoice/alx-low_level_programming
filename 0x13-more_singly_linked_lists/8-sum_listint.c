#include "lists.h"
/**
 * sum_listint - main function
 * @head: head pointer parameter
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
