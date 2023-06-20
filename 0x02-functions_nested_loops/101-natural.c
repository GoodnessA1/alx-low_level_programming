#include "main.h"
#include <stdio.h>

void sum_of_numbers(void);
/**
 * sum_of_numbers - Adds all numbers that are divisible by 3 or 5 and less than 1024
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
