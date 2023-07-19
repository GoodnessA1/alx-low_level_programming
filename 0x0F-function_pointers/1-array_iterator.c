#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Array iterator
 * @array: param 1
 * @size: param 2
 * @action: function param
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
