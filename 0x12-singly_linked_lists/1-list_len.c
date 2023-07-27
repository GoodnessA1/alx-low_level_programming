#include "lists.h"
/**
 * list_len - Prints all the numbers
 * @h: Parameter
 *
 * Return: Length of list
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}

	return (s);
}
