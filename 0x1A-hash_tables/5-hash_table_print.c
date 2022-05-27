#include "hash_tables.h"
/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 * Description: as above.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *node;
	/*
	 * @i: as index.
	 * @count: as counter.
	 * @node: ptr to hash_node_t type.
	 */
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
