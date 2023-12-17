#include "hash_tables.h"

/**
 * key_index - Gives index of a key in hash table array.
 * @key: Key for which to find index.
 * @size: Size of array in hash table.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
