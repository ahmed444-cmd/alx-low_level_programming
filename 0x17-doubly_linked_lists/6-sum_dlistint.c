#include "lists.h"

/**
 * sum_dlistint - mk sum of all the data [n]
 * of a db linked lst
 *
 * @head: list's head
 * Return: sum of data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
