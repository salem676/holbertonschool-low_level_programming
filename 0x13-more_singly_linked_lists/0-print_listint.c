/*
 * File: 0-print_listint.c
 * Author: salem676
 */
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * Return: size_t
 * @h: list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;
	/*
	 * nodes: integer represents number of nodes.
	 */
	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
