#include "hash_tables.h"

/**
  * hash_table_create - creattes a hash table.
  * @size: sizeof the hash table.
  *
  * Return: pointer to has table type.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;

	if (!size)
		return (NULL);

	htt = calloc(1, sizeof(hash_table_t));
	if (!htt)
		return (NULL);
	htt->size = size;
	htt->array = calloc(size, sizeof(hash_node_t *));
	if (!htt->array)
	{
		free(htt);
		return (NULL);
	}
	return (htt);
}
