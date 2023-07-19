#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Indexes the array
 * @array: param 1
 * @size: param 2
 * @cmp: function
 *
 * Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
