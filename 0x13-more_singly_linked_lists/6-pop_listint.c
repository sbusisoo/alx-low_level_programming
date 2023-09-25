#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: the first node
 * Return: the head node's data, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	if (!head || !*head)
		return (0);
	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}
