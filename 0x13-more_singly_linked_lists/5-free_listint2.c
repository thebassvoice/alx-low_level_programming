#include "lists.h"
/**
 * free_listint2 - main linked list free
 * @head: pointer parameter
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *anotherPtr;

	if (head != NULL)
	{
		anotherPtr = *head;
		while ((ptr = anotherPtr) != NULL)
		{
			anotherPtr = anotherPtr->next;
		free(ptr);
		}
	*head = NULL;
	}
}
