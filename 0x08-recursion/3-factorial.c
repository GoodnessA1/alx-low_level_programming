#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: Number
 *
 * Return: Factorial
 */
int factorial(int n)
{
	int a;

	if (n < 0)
		a = -1;

	else if (n == 0)
		a = 1;

	else
		a = n * factorial(n - 1);

	return (a);
}
