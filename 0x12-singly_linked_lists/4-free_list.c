#include "lists.h"

/**
 * free_list - Main function
 * @head: head pointer
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *thi;

	while (this = head) != NULL)
	{
		head = head->next;
		free(this->str);
		free(this);
	}
}
