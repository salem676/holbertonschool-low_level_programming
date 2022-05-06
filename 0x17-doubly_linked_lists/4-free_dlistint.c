/*
 * Filename: 4-free_dlistint.c
 * Author: salem676
 */
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list.
 * @head: head of linked list.
 * Description: as above.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	/*
	 * @aux: pointer aux node var.
	 */
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
