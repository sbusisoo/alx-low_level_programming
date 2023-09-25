#include "lists.h"
/**
 * reverse_listint - a functions that reverses a linked list
 * @head: pointer to first node
 * Return: a pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previ = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previ;
		previ = *head;
		*head = next;
	}
	*head = previ;

	return (*head);
}
