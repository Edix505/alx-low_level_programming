#include "hash_tables.h"

/**
 * key_index - generates the key
 * @key: pointer key
 * @size: size
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
