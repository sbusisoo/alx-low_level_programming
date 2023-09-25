#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the numb of codes in linked list
 * @head: a pointer to the first node
 * Return: 0 if list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tort = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				nodes++;
				tort = tort->next;
				hare = hare->next;
			}
			tort = tort->next;
			while (tort != hare)
			{
				nodes++;
				tort = tort->next;
			}
			return (nodes);
		}
		tort = tort->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - a functionsthat prnts a linked list
 * @head: a pointer to the first node
 * Return: num of node in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, ind = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < nodes; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

