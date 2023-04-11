#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main function
 * @ac: argument
 * @av: pointer to a pointer argument
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int inn, no, j = 0, i = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (inn = 0; inn < ac; inn++)
	{
		for (no = 0; av[inn][no]; no++)
			i++;
	}
	i += ac;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	for (inn = 0; inn < ac; inn++)
	{
		for (no = 0; av[inn][no]; no++)
		{
			ptr[j] = av[inn][no];
			j++;
		}
		if (ptr[j] == '\0')
		{
			ptr[j++] = '\n';
		}
	}
	return (ptr);
}

