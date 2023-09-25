#include "lists.h"
/**
 * print_listint - a function that prints a elements of list
 * @h: link to list to be printed
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
