#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that returns the of elements linked
 * @h: a pointer to list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
