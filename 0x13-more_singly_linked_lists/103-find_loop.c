#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in linked list
 * @head: pointer to first node
 * Return: the addre of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	if (!head)
		return (NULL);
	while (first && last && last->next)
	{
		last = last->next->next;
		first = first->next;
		if (last == first)
		{
			last = head;
			while (first != last)
			{
				first = first->next;
				last = last->next;
			}
			return (last);
		}
	}
	return (NULL);
}
