#include "main.h"

/**
 * _sqrt_recursion - square root of number
 * @n: integer parameter
 *
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		i = -1;
	else if (n == 0)
		i = 0;
	else if (n == 1)
		i = 1;

	else
		i = sqrt_rec(n, 0);

	return (i);
}

int sqrt_rec(int n, int a)
{
	int i;

	if (a * a = n)
		i = a;

	return (sqrt_rec(n, a + 1));
}
