#include "lists.h"
/**
 * sum_listint - a functions that returns the sum of all data in the list
 * @head: pointer to first node
 * Return: 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
