#include "lists.h"
/**
 * free_listp - function main
 * @head: ptr to the ptr
 *
 * Return: Nothing
 */
void free_listp(listp_t **head)
{
	listp_t *j;
	listp_t *ptr;

	if (head != NULL)
	{
		j = *head;
		while ((ptr = j) != NULL)
		{
			j = j->next;
			free(ptr);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - safe function
 * @head: head pointer
 *
 * Return: Node number
 */
size_t print_listint_safe(const listint_t *head)
{
	listp_t *in, *more, *latest;
	size_t nodeNum;

	nodeNum = 0;
	in = NULL;

	while (head != NULL)
	{
		latest = malloc(sizeof(listp_t));
		if (latest == NULL)
			exit(98);
		latest->p = (void *)head;
		latest->next = in;
		in = latest;
		more = in;
		while (more->next != NULL)
		{
			more = more->next;
			if (head == more->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&in);
				return (nodeNum);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodeNum++;
	}
	free_listp(&in);
	return (nodeNum);
}
