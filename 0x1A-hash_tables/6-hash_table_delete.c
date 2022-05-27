#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Description: as above stated.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	/*
	 * @i: as index.
	 * @node: ptr to hash_node_t.
	 */
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
