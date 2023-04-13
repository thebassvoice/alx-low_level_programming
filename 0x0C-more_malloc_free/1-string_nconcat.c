#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Function joins strings together
 * @s1: Argument
 * @s2: Argument 2
 * @n: int argument
 *
 * Return: Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int josh, one, en, sec;
		
	one = 0;
	josh = 0;
	en = 0;
	sec = 0;
	while (s1 && s1[en])
		en++;
	while (s2 && s2[sec])
		sec++;
	if (n < sec)
		s = malloc(sizeof(char) * (en + n + 1));
	else
		s = malloc(sizeof(char) * (en + sec + 1));
	if (!s)
		return (NULL);
	while (one < en)
	{
		s[one] = s1[one];
		one++;
	}
	while (n < sec && one < (en + n))
		s[one++] = s2[josh++];
	while (n >= sec && one < (en + sec))
		s[one++] = s2[josh++];
	s[one] = '\0';
	return (s);
}
