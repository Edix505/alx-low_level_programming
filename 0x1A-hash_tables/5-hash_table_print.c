#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int x, flag = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		n = ht->array[x];
		if (flag == 1 && n != NULL)
			printf(", ");
		if (n != NULL)
		{
			if (n->next == NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				flag = 1;
				continue;
			}
			while (n != NULL)
			{
				flag = 1;
				printf("'%s': '%s'", n->key, n->value);
				if (n->next != NULL)
					printf(", ");
				n = n->next;
			}
		}
	}
	printf("}\n");
}
