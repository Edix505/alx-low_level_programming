#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at given index of a list
 * @head: A pointer to the head of the dlistint_t.
 * @index: Index of the list to search
 *
 * Return: 1 upon success otherewise, -1 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tamp = *head, *prev = NULL;
	unsigned int n = 0;

	if (head == NULL || tamp == NULL)
		return (-1);

	if (index == 0)
	{
		if (tamp->next != NULL)
			tamp->next->prev = NULL;
		*head = tamp->next;
		free(tamp);
		return (1);
	}

	while (tamp != NULL && n != index)
	{
		prev = tamp;
		tamp = tamp->next;
		n++;
	}
	if (tamp == NULL)
		return (-1);

	prev->next = tamp->next;
	if (tamp->next != NULL)
		tamp->next->prev = prev;
	free(tamp);

	return (1);
}
