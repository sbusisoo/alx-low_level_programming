#include "lists.h"
/**
 * free_listint - a function that frees listint_t list
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
