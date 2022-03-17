/*
 * File: 0-print_list.c
 * Author: salem676
 */
#include "lists.h"
/**
 * print_list - function prints all elements of list_t list.
 * @h: const list_t pointet to head of list.
 * Description: as stated above.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int x;
	/*
	 * @x: number of nodes variable.
	 */
	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (x);
}
