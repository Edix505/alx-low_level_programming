#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of the list
 * @head: Head of the list
 * @index: The node to locate
 *
 * Return: Node in the current index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a = head;
	unsigned int n = 0;

	while (a != NULL)
	{
		if (n == index)
			return (a);
                     a = a->next;
		n++;
		
	}

	return (NULL);
}
