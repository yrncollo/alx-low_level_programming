#include "hash_tables.h"

/**
 * hash_table_set - add element into hash table
 * @ht - hash table to update
 * @key: key
 * @value: value associated with key
 * value can be duplicated
 * value can be an empty string
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *ky = (unsigned char *)key;
	unsigned long int index = key_index(ky, ht->size);
	char *pair = (char *)key;
	char *pair_value = (char *)value;
	hash_node_t *temp;
	hash_node_t *hold;

	if (ht == NULL)
		return (0);
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = pair;
	temp->value = pair_value;
	temp->next = NULL;
	if ((ht->array)[index] == NULL)
		(ht->array)[index] = temp;
	else
	{
		hold = (ht->array)[index];
		while (hold->next != NULL)
		{
			hold = hold->next;
		}
		hold->next = temp;
	}
	return (0);
}
