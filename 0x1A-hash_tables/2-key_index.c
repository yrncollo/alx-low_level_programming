#include "hash_tables.h"

/**
 * key_index - gives index of key
 * @key: key
 * @size: size of array hash table
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
