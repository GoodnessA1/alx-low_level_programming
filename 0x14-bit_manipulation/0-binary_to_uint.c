#include "main.h"
#include <string.h>
/**
 * binary_to_uint - Bin to int
 * @b: param
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, n;
	int i;

	if (strcmp(b, "") == 0)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (n = 1, result = 0, i--; i >= 0; i--, n *= 2)
	{
		if(b[i] == '1')
			result += n;
	}
	return (result);
}
