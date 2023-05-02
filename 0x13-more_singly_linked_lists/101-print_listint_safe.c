#include "lists.h"
/**
 * print_listint_safe - main function
 * @head: head pointer
 *
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeNum = 0;
	long int j;

	while (head)
	{
		j = head - head->next;
		nodeNum++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (j > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodeNum);
}
