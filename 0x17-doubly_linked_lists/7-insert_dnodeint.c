#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in the given index
 * @h: Memory address of the head list
 * @idx: Index of the list
 * @n: New data (int)
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *a, *prev = *a;
	unsigned int x;

	if (a == NULL || (temp == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(a, n));

	temp = temp->next;
	for (x = 1; x < idx; x++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		prev = prev->next;
	}
	if (temp == NULL)
		return (add_dnodeint_end(a, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	new->prev = temp;
	prev->next = new;
	if (temp != NULL)
		temp->prev = new;
	return (new);
}
