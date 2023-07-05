#include "main.h"

/**
 * _pow_recursion - Power function
 * @x: parameter
 * @y: parameter
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	int a;

	if (y > 1)
	{
		a = x * _pow_recursion(x, y - 1);
	}
	else if (y == 1)
		a = x;
	else if (y == 0)
		a = 1;

	else
		a = -1;

	return (a);
}
