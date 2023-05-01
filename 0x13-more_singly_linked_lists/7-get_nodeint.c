#include "lists.h"
/**
 * get_nodeint_at_index - main fuction
 * @head: pointer
 * @index: unsigned argument
 *
 * Return: head pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int emel;

	for (emel = 0; emel < index && head != NULL; emel++)
	{
		head = head->next;
	}
	return (head);
}
