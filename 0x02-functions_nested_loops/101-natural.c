#include "main.h"
#include <stdio.h>

void sum_of_numbers(void);
/**
 * sum_of_numbers - Sums numbers divisible by 3 or 5
 * @n: starts the sum
 * @sum: initialized to zero
 *
 */
void sum_of_numbers(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%i\n", sum);
}
/**
 * main - checks the code
 *
 * Return: always 0
 */
int main(void)
{
	sum_of_numbers();
	return (0);
}
