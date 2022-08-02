#include "hash_tables.h"

/**
 * hash_table_delete - deletes a table
 * @ht: pointer to table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int x;

	if (ht == NULL)
		return;


	for (x = 0; x < ht->size; x++)
	{
		n = ht->array[x];
		if (n != NULL)
		{
			if (n->next == NULL)
			{
				free(n->value);
				free(n->key);
				free(n);
				continue;
			}
			while (n != NULL)
			{
				temp = n;
				n = n->next;
				free(temp->value);
				free(temp->key);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
