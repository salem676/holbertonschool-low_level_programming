/*
 * File: 4-free_listint.c
 * Author: salem676
 */
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list.
 * @head: head node.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;
		/*
		 * @tmp: pointer temporal variable to list.
		 */
		head = head->next;
		free(tmp);
	}
}
