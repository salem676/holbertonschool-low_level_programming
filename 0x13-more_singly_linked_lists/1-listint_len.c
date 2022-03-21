/*
 * File: 1-listint_len.c
 * Author: salem676
 */
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - get len of list.
 * Return: size_t.
 * @h: list.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;
	/*
	 * @len: length of list.
	 */
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
