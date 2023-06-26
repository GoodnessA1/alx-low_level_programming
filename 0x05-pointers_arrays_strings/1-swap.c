#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter of function
 * @b: parameter of function
 */
void swap_int(int *a, int *b)
{
	int **ptra, **ptrb;

	ptra = &a;
	ptrb = &b;

	**ptra = *b;
	**ptrb = *a;
}
