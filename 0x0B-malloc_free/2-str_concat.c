#include "main.h"
#include <stdlib.h>

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
	int i, j, k, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2[b] != '\0')
		b++;

	s = malloc(sizeof(char) * (a + b + 1));

	if (s != NULL)
	{
		i = 0;
		k = 0;
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		j = i + 1;
		while (s2[k] != '\0')
		{
			s[j] = s2[k];
			k++;
		}
	}
	return (s);
}
