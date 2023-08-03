#include "main.h"
/**
 * clear_bit - Clears bit
 * @n: param
 * @index: param
 *
 * Return: 1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int b;

	if (index > 64)
		return (-1);

	b = index;
	for (a = 1; b > 0; a *= 2, b--)
		;

	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}
