/*
 * Filename: 0-print_dlistint.c
 * Author: salem676
 */
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_t list.
 * @h: head of list.
 * Description: as stated above.=.
 * Return: elements of list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	/*
	 * @i: acts as counter.
	 */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
