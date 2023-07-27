#include "lists.h"

/**
 * print_list - Prints a list
 * @h: parameter
 *
 * Return: Size of list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}
