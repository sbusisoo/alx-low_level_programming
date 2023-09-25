#include "lists.h"
/**
 * insert_nodeint_at_index - a function the inserts a node at a given poition
 * @head: pointer to first node
 * @idx: the index where the node should be added
 * @n: info for new node
 * Return: addre of new node, NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);

}
