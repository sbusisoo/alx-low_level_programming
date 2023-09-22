#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t
 * @head: from the list to be freed
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
