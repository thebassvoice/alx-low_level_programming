#include "lists.h"
/**
 * find_listint_loop - function main
 * @head: head pointer
 *
 * Return: NULL or node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *other = head;
	listint_t *theOther = head;

	if (!head)
		return (NULL);
	while (other && theOther && theOther->next)
	{
		theOther = theOther->next->next;
		other = other->next;
		if (theOther == other)
		{
			other = head;
			while (other != theOther)
			{
				other = other->next;
				theOther = theOther->next;
			}
			return (theOther);
		}
	}
	return (NULL);
}
