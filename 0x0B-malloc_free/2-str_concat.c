#include "main.h"
#include <stdlib.h>
/**
 * str_concat - main function
 * @s1: input argument
 * @s2: parameter 2 input argument
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int nn;
	int con;

	if (s1 == NULL)
		s1 = "";
	else
	{
		if (s2 == NULL)
		s2 = "";
		nn = con = 0;
	}
	while (s1[nn] != '\0')
		nn++;
	while (s2[con] != '\0')
		con++;
	conct = malloc(sizeof(char) * (nn + con + 1));
	if (conct == NULL)
		return (NULL);
	nn = con = 0;
	while (s1[nn] != '\0')
	{
		conct[nn] = s1[nn];
		nn++;
	}
	while (s2[con] != '\0')
	{
		conct[nn] = s2[con];
		nn++, con++;
	}
	conct[nn] = '\0';
	return (conct);
}
