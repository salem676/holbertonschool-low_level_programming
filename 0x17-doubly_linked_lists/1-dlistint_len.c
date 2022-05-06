/*
 * Filename: 1-dlistint_len.c
 * Author: salem676
 */
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked.
 * @h: head of list.
 * Description: as above.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	/*
	 * @i: as counter.
	 */
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
