#include "main.h"
/**
 * flip_bits - Flips a bit
 * @n: param
 * @m: param
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int count;

	a = n ^ m;
	count = 0;

	while (a)
	{
		count++;
		a &= (a - 1);
	}

	return (count);
}
