#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list.
 * @head: pointer to lst's head
 * Return: none
**/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
