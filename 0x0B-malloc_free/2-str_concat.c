#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenates strings together
 * @s1: String 1
 * @s2: String 2
 *
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, k, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2[b] != '\0')
		b++;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (a + b + 1));

	if (s != NULL)
	{
		i = 0;
		k = 0;
		while (i < a)
		{
			s[i] = s1[i];
			i++;
		}
		while (i < (a + b))
		{
			s[i] = s2[k];
			k++;
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
