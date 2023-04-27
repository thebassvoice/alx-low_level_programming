#include "lists.h"
/**
 * add_node - main function
 * @head: pointer to a pointer
 * @str: pointer
 * Return: pointer to a pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t character;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (character = 0; str[character]; character++)
		;
	i->len = character;
	i->next = *head;
	*head = i;

	return (*head);
}
