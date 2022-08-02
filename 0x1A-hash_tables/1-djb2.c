#include "hash_tables.h"

/**
 * hash_djb2 -func generates a djb2
 * @str: pointer to chars
 * Return: h_key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int x;

	while ((x = *str++))
	hash = ((hash << 5) + hash) + x; /* hash * 33 + x */

	return (hash);
}
