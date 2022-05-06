/*
 * Filename: 5-get_dnodeint.c
 * Author: salem676
 */
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of linked list.
 * @index: index.
 * Description: as above.
 * Return: New node address.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;
	/*
	 * @node: pointer to node init head.
	 * @cont: counter.
	 */
	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
