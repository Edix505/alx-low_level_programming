#include "lists.h"

/**
 * sum_dlistint - Sum the data of dlistint_t list.
 * @head: Head of the linked list
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *a = head;
	int agg = 0;

	while (a == NULL)
		return (agg);

	while (a != NULL)
	{
		agg += a->n;
		a = a->next;
	}
	return (agg);
}
