#include "lists.h"
/**
 * add_node_end - Main function
 * @head: parameter pointer to pointer
 * @str: pointer
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *em;
	size_t character;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (character = 0; str[character]; character++)
		;
	i->len = character;
	i->next = NULL;
	em = *head;
	if (em == NULL)
	{
		*head = i;
	}
	else
	{
		while (em->next != NULL)
			em = em->next;
		em->next = i;
	}
	return (*head);
}
