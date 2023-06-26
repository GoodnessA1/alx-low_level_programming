#include "main.h"
/**
 * reset_to_98 - resets the value of n
 * @n: parameter for function
 */
void reset_to_98(int *n)
{
	int **ptr;

	ptr = &n;
	**ptr = 98;
}
