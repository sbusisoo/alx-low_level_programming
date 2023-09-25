#include "lists.h"
/**
 * listint_len - a function that returns a the number of elements in the list
 * @h: linked list of type listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
