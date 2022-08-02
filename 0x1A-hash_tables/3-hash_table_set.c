#include "hash_tables.h"
/**
 *hash_table_set - add an elt to table
 *@ht: pointer hash
 *@key: pointer key
 *@value: value to add
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index, size;
hash_node_t *nn;

if (htt  == NULL || key == NULL || value == NULL)
return (0);

size = htt->size;
index = key_index((const unsigned char *)key, size);

if (htt->array[index] != NULL && strcmp(htt->array[index]->key, key) == 0)
{
htt->array[index]->value = strdup(value);
return (1);
}

nn = malloc(sizeof(hash_node_t));

if (nn == NULL)
return (0);

nn->key = strdup(key);
nn->value = strdup(value);
nn->next = htt->array[index];
htt->array[index] = nn;
return (1);
}
