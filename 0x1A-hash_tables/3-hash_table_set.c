#include "hash_tables.h"

/**
 * hash_table_set - add an elt to table
 * @ht: hash table
 * @key: the key (can't be empty string)
 * @value: value associated with the key (it can be empty string)
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	hash_node_t *n;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	n = ht->array[idx];
	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
		{
			free(n->value);
			n->value = strdup(value);
			return (1);
		}
		n = n->next;
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (0);
	n->key = strdup(key);
	n->value = strdup(value);
	n->next = ht->array[idx];
	ht->array[idx] = n;
	return (1);
}
