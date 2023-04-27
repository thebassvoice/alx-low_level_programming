#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Main function
 * @head: pointer link
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
