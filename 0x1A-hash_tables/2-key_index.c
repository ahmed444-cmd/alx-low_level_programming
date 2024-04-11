#include "hash_tables.h"

/**
 * key_index - Get the index at that a key&value
 *      pair should be stored in the hash array.
 * @key: The index's key.
 * @size: The array of the hash table's size.
 *
 * Return: The key's index.
 * Description: Uses djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
