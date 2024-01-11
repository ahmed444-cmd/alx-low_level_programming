#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth nd of a dlistint_t linked lst
 * @head: pointer to list's head
 * @index: nd's index to search for that starts from 0
 * Return: nth nd or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
