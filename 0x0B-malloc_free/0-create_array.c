#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Create an Array
 * @size: size of the array
 * @c: Array index character
 *
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s != NULL)
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s)
}
