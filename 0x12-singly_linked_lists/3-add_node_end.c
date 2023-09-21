#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a functions that add a new node at the beginning of list_t
 * @head: pointer to first node
 * @str: string to put new node
 * Return: address of the new element, or null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
