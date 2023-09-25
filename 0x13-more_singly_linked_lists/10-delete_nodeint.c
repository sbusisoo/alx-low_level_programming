#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * @head: pointer to first node
 * @index: the node that should be deleted
 * Return: 1 if success, -1if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}
	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);
	return (1);
}
