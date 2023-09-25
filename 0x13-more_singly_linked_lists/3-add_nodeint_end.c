#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to the first node
 * @n: info for new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tem->next)
		tem = tem->next;
	tem->next = new;
	return (new);
}
