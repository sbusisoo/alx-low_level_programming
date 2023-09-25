#include "lists.h"
/**
 * get_nodeint_at_index - a function that rturns a nth node of the linked list
 * @head: pointer to first node
 * @index: the indx if the node at starting
 * Return: NULL if the node doen't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;
	listint_t *tmp = head;

	while (tmp && h < index)
	{
		tmp = tmp->next;
		h++;
	}
	return (tmp ? tmp : NULL);
}
