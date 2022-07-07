#include "lists.h"

/**
 * free_dlistint - Free the list
 * @head: Head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;


	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
